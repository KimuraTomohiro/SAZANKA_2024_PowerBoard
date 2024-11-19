# SAZANKA_2024_PowerBoard
PowerBoard of SAZANKA in Nagoya Institute of Technology
2024年バージョンの電源基板です
### 基板機能紹介
緑色部分は機体班含め知っておいて欲しい部分、青色部分は回路・制御班が知っておいて欲しい部分
![図1](https://github.com/user-attachments/assets/41b4d23c-b20e-4ea2-a32a-a440a7056c97)

## 使い方
### 出力LED
赤色LEDで、電圧が出力されていると点灯、出力されていない時は消灯する。

出力が切れてすぐはコンデンサーの電荷が残っていてすぐに消灯しないことがある。

### 低電圧警告LED
黄色LEDで、電圧が一定以下になると2回のビープ音と共に点灯して通知し、更に電圧が低下するとビープ音と共に点滅して警告する。

ビープ音が聞こえたり、黄色LEDの点灯が見えたりしたら、できる限り早くバッテリーを交換すること。

通知と警告を行う電圧は以下の通り
- 通知
*   21.6V系統：19.8V
*   10.8V系統：9.9V
- 警告
*   21.6V系統；18.6V
*   10.8V系統：9.3V

通知と警告の電圧を変更する際は、PICに書き込んだプログラムの定数を変更する必要がある。

### 緊急停止スイッチ接続部
画像の一番左のピンから、
21.6V系統のリレー信号
GND
10.8V系統のリレー信号
GND
の順に並んでいる。
そのため2b接点のスイッチが必要

### エマージェンシー制御
ソフトウェアとハードウェアのエマージェンシー機能を手動でオフにできるDIPスイッチ

これにより、回路基板単体を用いて試験的に電圧を出力することができる。

__ここがオンになっているとエマージェンシーが機能しない。本番前に必ずオフになっていることを確認すること__

上から、

21.4V系統の
- ソフトウェアエマージェンシー
- ハードウェアエマージェンシー


10.8V系統の
- ソフトウェアエマージェンシー
- ハードウェアエマージェンシー
を無効化するスイッチになっている

### ヒューズ
過電流で切断するヒューズ。低頭ヒューズと言われるもの。

左側が21.6V用の30Aヒューズ、右側が10.8V用の10Aヒューズを使用している。

### 制御用Seeduno
ソフトウェアエマージェンシー機能を使ったリレーのオンオフや、バッテリー電圧の読み取りができる。

サンプルプログラムについては(こちら)[プログラム/README.md]を参照

### PICKit接続箇所
本体に搭載されたPICマイコンのプログラムを書き換えるポート。デバッグ作業にも使用する。

PICKitの表と基板の表を揃えて接続すると、PICKitのICSP機能が使えるようになっている。

### CANコネクタ、CAN終端抵抗切替スイッチ(オプション)
将来的な拡張のため、CAN通信用のコネクタと終端抵抗の切替スイッチをつけてある。

Seedunoのちょうど裏にあるCAN通信用ICを搭載しない場合は、何の効果も持たないため取り付けなくても良い


