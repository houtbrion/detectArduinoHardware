# arduinoHardwareHelper

detectArduinoHardwareライブラリ(実態はヘッダファイルのみ)の機能である，CPUアーキやCPUの種類識別，
検出したボードのピン配置の情報を利用し，便利機能を実装するライブラリです．

## ライセンス
detectArduinoHardwareを継承しているので
BSDライセンスです．詳細はLICENCEファイルを見てください．


## 依存するライブラリ
- detectArduinoHardware
   - https://github.com/houtbrion/detectArduinoHardware


## API

### checkPMW(int port)
```
bool HardwareHelper::checkPMW(int port);
```

引数で与えたポートがPMW対応か否かをbool値で返す．

### SoftwareReset(void)
```
void HardwareHelper::SoftwareReset(void);
```
ボードをソフトウェアリセットを行う．


### SerialWait(void)
```
void HardwareHelper::SerialWait(void);
```
debug時などにシリアルポートをオープンするまで待つ場合に用いる．
シリアルポートをオープンした場合にリセットさせるボードはなにも
せずにこの関数を抜けて，リセットされないボードはシリアルポートが
オープンされるまでこの関数内で待つという動作を行う．






