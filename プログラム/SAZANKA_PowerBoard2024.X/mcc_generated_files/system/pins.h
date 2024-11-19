/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
? [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA2 aliases
#define BUZZER_TRIS                 TRISAbits.TRISA2
#define BUZZER_LAT                  LATAbits.LATA2
#define BUZZER_PORT                 PORTAbits.RA2
#define BUZZER_WPU                  WPUAbits.WPUA2
#define BUZZER_OD                   ODCONAbits.ODA2
#define BUZZER_ANS                  ANSELAbits.ANSA2
#define BUZZER_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define BUZZER_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define BUZZER_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define BUZZER_GetValue()           PORTAbits.RA2
#define BUZZER_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define BUZZER_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define BUZZER_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define BUZZER_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define BUZZER_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define BUZZER_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define BUZZER_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define BUZZER_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RA4 aliases
#define LED_24V_TRIS                 TRISAbits.TRISA4
#define LED_24V_LAT                  LATAbits.LATA4
#define LED_24V_PORT                 PORTAbits.RA4
#define LED_24V_WPU                  WPUAbits.WPUA4
#define LED_24V_OD                   ODCONAbits.ODA4
#define LED_24V_ANS                  ANSELAbits.ANSA4
#define LED_24V_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_24V_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_24V_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_24V_GetValue()           PORTAbits.RA4
#define LED_24V_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_24V_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED_24V_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED_24V_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED_24V_SetPushPull()        do { ODCONAbits.ODA4 = 0; } while(0)
#define LED_24V_SetOpenDrain()       do { ODCONAbits.ODA4 = 1; } while(0)
#define LED_24V_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED_24V_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)
// get/set IO_RA5 aliases
#define LED_12V_TRIS                 TRISAbits.TRISA5
#define LED_12V_LAT                  LATAbits.LATA5
#define LED_12V_PORT                 PORTAbits.RA5
#define LED_12V_WPU                  WPUAbits.WPUA5
#define LED_12V_OD                   ODCONAbits.ODA5
#define LED_12V_ANS                  ANSELAbits.
#define LED_12V_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_12V_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_12V_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_12V_GetValue()           PORTAbits.RA5
#define LED_12V_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_12V_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_12V_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_12V_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_12V_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define LED_12V_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)
#define LED_12V_SetAnalogMode()      do { ANSELAbits. = 1; } while(0)
#define LED_12V_SetDigitalMode()     do { ANSELAbits. = 0; } while(0)
// get/set IO_RC1 aliases
#define VREF_24V_TRIS                 TRISCbits.TRISC1
#define VREF_24V_LAT                  LATCbits.LATC1
#define VREF_24V_PORT                 PORTCbits.RC1
#define VREF_24V_WPU                  WPUCbits.WPUC1
#define VREF_24V_OD                   ODCONCbits.ODC1
#define VREF_24V_ANS                  ANSELCbits.ANSC1
#define VREF_24V_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define VREF_24V_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define VREF_24V_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define VREF_24V_GetValue()           PORTCbits.RC1
#define VREF_24V_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define VREF_24V_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define VREF_24V_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define VREF_24V_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define VREF_24V_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define VREF_24V_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)
#define VREF_24V_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define VREF_24V_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
// get/set IO_RC2 aliases
#define VREF_12V_TRIS                 TRISCbits.TRISC2
#define VREF_12V_LAT                  LATCbits.LATC2
#define VREF_12V_PORT                 PORTCbits.RC2
#define VREF_12V_WPU                  WPUCbits.WPUC2
#define VREF_12V_OD                   ODCONCbits.ODC2
#define VREF_12V_ANS                  ANSELCbits.ANSC2
#define VREF_12V_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define VREF_12V_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define VREF_12V_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define VREF_12V_GetValue()           PORTCbits.RC2
#define VREF_12V_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define VREF_12V_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define VREF_12V_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define VREF_12V_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define VREF_12V_SetPushPull()        do { ODCONCbits.ODC2 = 0; } while(0)
#define VREF_12V_SetOpenDrain()       do { ODCONCbits.ODC2 = 1; } while(0)
#define VREF_12V_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define VREF_12V_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.WPUC3
#define IO_RC3_OD                   ODCONCbits.ODC3
#define IO_RC3_ANS                  ANSELCbits.ANSC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits.ODC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits.ODC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.WPUC5
#define IO_RC5_OD                   ODCONCbits.ODC5
#define IO_RC5_ANS                  ANSELCbits.ANSC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/