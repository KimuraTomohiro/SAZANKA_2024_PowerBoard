#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/pins.h"

// 定数定義
#define NOTIFICATION_24 19.8
#define ALART_24        18.6
#define RESET_24        9.0
#define NOTIFICATION_12 9.9
#define ALART_12        9.3
#define RESET_12        6.0

#define A_24V           0.0008789
#define B_24V           -3.3375
#define A_12V           0.00042613636
#define B_12V           -1.52727272

unsigned int voltage_raw_24 = 0;
unsigned int voltage_raw_12 = 0;

// マクロ用ラッパー関数
void LED_24V_On() { LED_24V_SetHigh(); }
void LED_24V_Off() { LED_24V_SetLow(); }
void LED_12V_On() { LED_12V_SetHigh(); }
void LED_12V_Off() { LED_12V_SetLow(); }


// グローバル変数
double voltage_12 = 0, voltage_24 = 0;
char reset_flg_24 = 4, reset_flg_12 = 4;

// プロトタイプ宣言
void timer_interrupt();
void handle_voltage(double voltage, double threshold, char mode, char *reset_flg, void (*LED_SetHigh)(), void (*LED_SetLow)());
void handle_buzzer();
void delay_ms(unsigned int ms);
void check_RX_Data();
char config_flg = 0;

int main(void)
{
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable(); 
    INTERRUPT_PeripheralInterruptEnable(); 
    TMR4_Start();
    TMR4_PeriodMatchCallbackRegister(timer_interrupt);
    EUSART_RxCompleteCallbackRegister(check_RX_Data);
    
    printf("SAZANKA_PowerBoard2024\n");
    printf("Created by KimuraTomohiro\n");
//    printf("input 'c' to enter config mode\n\n");

    
    while (1) {
        
        
        voltage_raw_24 = ADC_GetConversion(VREF_24V);
        voltage_raw_12 = ADC_GetConversion(VREF_12V);
        
        voltage_24 = voltage_raw_24 * A_24V + B_24V;
        voltage_12 = voltage_raw_12 * A_12V + B_12V;

        printf("VH:%.1f VL:%.1f\n", (voltage_24 > RESET_24) ? voltage_24 : 0, 
                                     (voltage_12 > RESET_12) ? voltage_12 : 0);

        handle_voltage(voltage_24, RESET_24, 24, &reset_flg_24, LED_24V_On, LED_24V_Off);
        handle_voltage(voltage_12, RESET_12, 12, &reset_flg_12, LED_12V_On, LED_12V_Off);

        
        if(config_flg == 1)
            break;
        delay_ms(10);
        
        
    }
    
    while(1){
        printf("This is config mode");
    }
}

void handle_voltage(double voltage, double threshold, char mode, char *reset_flg, void (*LED_SetHigh)(), void (*LED_SetLow)())
{
    if (voltage < threshold && *reset_flg == 3) {
        *reset_flg = 4;
        BUZZER_SetLow();
        LED_SetLow();
    }

    if(*reset_flg == 0){
        delay_ms(500);
        *reset_flg = 1;
        return;
    }
    
    
    if (((mode == 24 && voltage <= NOTIFICATION_24) || (mode == 12 && voltage <= NOTIFICATION_12)) && *reset_flg == 1) {
        LED_SetHigh();
        delay_ms(5000);
        *reset_flg = 2;
        handle_buzzer();
    }else if(((mode == 24 && voltage > NOTIFICATION_24) || (mode == 12 && voltage > NOTIFICATION_12)) && *reset_flg == 1){
        *reset_flg = 0; 
    }

    if (((mode == 24 && voltage <= ALART_24) || (mode == 12 && voltage <= ALART_12)) && *reset_flg <= 2) {
        *reset_flg = 3;
    }
    
    

    if (((mode == 24 && voltage >= RESET_24) || (mode == 12 && voltage >= RESET_12)) && *reset_flg == 4) {
        *reset_flg = 0;
        BUZZER_SetHigh();
        LED_SetHigh();
        delay_ms(500);
        BUZZER_SetLow();
        LED_SetLow();
        delay_ms(2000);
    }
}

void handle_buzzer() {
    for (char i = 0; i < 2; i++) {
        BUZZER_SetHigh();
        delay_ms(800);
        BUZZER_SetLow();
        delay_ms(500);
    }
}

void delay_ms(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++) {
        __delay_ms(1);
    }
}

void timer_interrupt() {
    if (reset_flg_24 == 3) LED_24V_Toggle();
    if (reset_flg_12 == 3) LED_12V_Toggle();
    if (reset_flg_24 == 3 || reset_flg_12 == 3) BUZZER_Toggle();
}

void check_RX_Data(){
    char buf;
    EUSART_Write('C');
    while(EUSART_IsRxReady()){
        char i=0;
        buf=EUSART_Read();
        i++;
    }
    if(buf == 'c'){
        config_flg = 1;
    }
}


