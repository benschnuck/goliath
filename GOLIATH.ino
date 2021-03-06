#include <Bounce.h>
#include <Keypad.h>
#include <Metro.h>
#include <ILI9341_t3.h>
#include "AudioSampleKick1.h"
#include "AudioSampleKick2.h"
#include "AudioSampleKick3.h"
#include "AudioSampleKick4.h"
#include "AudioSampleSnare1.h"
#include "AudioSampleSnare2.h"
#include "AudioSampleSnare3.h"
#include "AudioSampleSnare4.h"
#include "AudioSampleHh1.h"
#include "AudioSampleHh2.h"
#include "AudioSampleHh3.h"
#include "AudioSampleHh4.h"
#include "AudioSampleClap1.h"
#include "AudioSampleClap2.h"
#include "AudioSampleClap3.h"
#include "AudioSampleClap4.h"

#define TFT_DC      20
#define TFT_CS      21
#define TFT_RST    255
#define TFT_MOSI     7
#define TFT_SCLK    14
#define TFT_MISO    12

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       lfo;            //xy=134,2719
AudioSynthWaveform       waveformA1;     //xy=695,148
AudioSynthWaveform       waveformB1;     //xy=696,188
AudioSynthWaveform       waveformA2;     //xy=708,374
AudioSynthWaveform       waveformB2;     //xy=709,414
AudioSynthWaveform       waveformA3;     //xy=711,574
AudioSynthWaveform       waveformB3;     //xy=712,614
AudioSynthWaveform       waveformA4;     //xy=731,814
AudioSynthWaveform       waveformB4;     //xy=732,854
AudioSynthWaveform       waveformA5;     //xy=746,1042
AudioSynthWaveform       waveformA6;     //xy=746,1259
AudioSynthWaveform       waveformB5;     //xy=747,1082
AudioSynthWaveform       waveformB6;     //xy=747,1299
AudioSynthWaveform       waveformA16;      //xy=755,3198.5
AudioSynthWaveform       waveformB16;      //xy=757.2500114440918,3236.750045776367
AudioSynthWaveform       waveformA7;     //xy=771,1493
AudioSynthWaveform       waveformA8;     //xy=771,1699
AudioSynthWaveform       waveformB7;     //xy=772,1533
AudioSynthWaveform       waveformB8;     //xy=772,1739
AudioSynthWaveform       waveformA15;      //xy=768,3027.5
AudioSynthWaveform       waveformB15;      //xy=768,3067.5
AudioSynthWaveform       waveformB14;      //xy=786.2500114440918,2923.7500438690186
AudioSynthWaveform       waveformA9;     //xy=791,1906
AudioSynthWaveform       waveformB9;     //xy=792,1946
AudioSynthWaveform       waveformA14;      //xy=792.5000152587891,2883.7500438690186
AudioSynthWaveform       waveformA10;    //xy=796,2114
AudioSynthWaveform       waveformA11;    //xy=796,2318
AudioSynthWaveform       waveformB10;    //xy=797,2154
AudioSynthWaveform       waveformB11;    //xy=797,2358
AudioSynthWaveform       waveformB13;      //xy=810.0000114440918,2796.25004196167
AudioSynthWaveform       waveformA13;      //xy=811.25,2758.75
AudioSynthWaveform       waveformA12;    //xy=817,2519
AudioSynthWaveform       waveformB12;    //xy=818,2559
AudioMixer4              voiceMix1;      //xy=890,191
AudioMixer4              voiceMix2;      //xy=903,417
AudioMixer4              voiceMix3;      //xy=906,617
AudioMixer4              voiceMix4;      //xy=926,857
AudioEffectMultiply      multiply2;      //xy=940,547
AudioMixer4              voiceMix5;      //xy=941,1085
AudioEffectMultiply      multiply3;      //xy=943,747
AudioMixer4              voiceMix6;      //xy=941,1302
AudioEffectMultiply      multiply4;      //xy=963,987
AudioMixer4              voiceMix7;      //xy=966,1536
AudioMixer4              voiceMix8;      //xy=966,1742
AudioEffectMultiply      multiply5;      //xy=978,1215
AudioEffectMultiply      multiply6;      //xy=978,1432
AudioMixer4              voiceMix9;      //xy=986,1949
AudioMixer4              voiceMix10;     //xy=991,2157
AudioMixer4              voiceMix11;     //xy=991,2361
AudioMixer4              voiceMix15;         //xy=991.2500152587891,3053.750045776367
AudioMixer4              voiceMix14;         //xy=995.0000152587891,2916.25004196167
AudioEffectMultiply      multiply7;      //xy=1003,1666
AudioEffectMultiply      multiply8;      //xy=1003,1872
AudioMixer4              voiceMix16;         //xy=998.7500152587891,3225.0000495910645
AudioMixer4              voiceMix12;     //xy=1012,2562
AudioMixer4              voiceMix13;         //xy=1012.5,2788.75
AudioEffectMultiply      multiply9;      //xy=1023,2079
AudioEffectMultiply      multiply10;     //xy=1028,2287
AudioEffectMultiply      multiply11;     //xy=1028,2491
AudioEffectMultiply      multiply16;     //xy=1035,3326.75
AudioEffectMultiply      multiply1;      //xy=1049,289
AudioEffectMultiply      multiply13;     //xy=1040.000015258789,2852.5000495910645
AudioEffectMultiply      multiply14;     //xy=1045.000015258789,2990.000045776367
AudioEffectMultiply      multiply12;     //xy=1049,2692
AudioEffectMultiply      multiply15;     //xy=1055.5,3135.75
AudioMixer4              lfoMix2;        //xy=1072,416
AudioMixer4              lfoMix1;        //xy=1075,166
AudioMixer4              lfoMix3;        //xy=1075,616
AudioMixer4              lfoMix4;        //xy=1095,856
AudioMixer4              lfoMix5;        //xy=1110,1084
AudioMixer4              lfoMix6;        //xy=1110,1301
AudioMixer4              lfoMix7;        //xy=1135,1535
AudioMixer4              lfoMix8;        //xy=1135,1741
AudioMixer4              lfoMix9;        //xy=1155,1948
AudioMixer4              lfoMix10;       //xy=1160,2156
AudioMixer4              lfoMix11;       //xy=1160,2360
AudioMixer4              lfoMix12;       //xy=1181,2561
AudioEffectEnvelope      env2;           //xy=1191,469
AudioEffectEnvelope      env3;           //xy=1194,669
AudioMixer4              lfoMix13;        //xy=1206.250015258789,2776.25004196167
AudioEffectEnvelope      env4;           //xy=1214,909
AudioMixer4              lfoMix14;        //xy=1210.0000190734863,2897.50004196167
AudioMixer4              lfoMix15;         //xy=1215,3043.75
AudioEffectEnvelope      env5;           //xy=1229,1137
AudioEffectEnvelope      env6;           //xy=1229,1354
AudioMixer4              lfoMix16;         //xy=1225,3210
AudioEffectEnvelope      env1;           //xy=1243,232
AudioEffectEnvelope      env7;           //xy=1254,1587
AudioEffectEnvelope      env8;           //xy=1254,1794
AudioEffectEnvelope      env9;           //xy=1274,2000
AudioEffectEnvelope      env10;          //xy=1279,2209
AudioEffectEnvelope      env11;          //xy=1279,2412
AudioEffectEnvelope      env12;          //xy=1301,2614
AudioMixer4              preMix1;        //xy=1389,597
AudioEffectEnvelope      env13;      //xy=1402.5,2766.25
AudioMixer4              preMix2;        //xy=1429,1457
AudioEffectEnvelope      env14;      //xy=1431.25,2892.5
AudioEffectEnvelope      env15;      //xy=1438.75,3038.75
AudioEffectEnvelope      env16;      //xy=1441.25,3197.5
AudioMixer4              preMix3;        //xy=1482,2309
AudioMixer4              preMix4;        //xy=1651,2932
AudioMixer4              mixer6;         //xy=1949,1233
AudioMixer4              finalMix1;      //xy=1984,1458
AudioFilterBiquad        biquad1;        //xy=2084,1327
AudioPlayMemory          playMem1;       //xy=2103,1830
AudioPlayMemory          playMem3;       //xy=2106,1920
AudioPlayMemory          playMem4;       //xy=2107,1968
AudioPlayMemory          playMem2;       //xy=2108,1875
AudioMixer4              mixer4;         //xy=2208,1444
AudioMixer4              mixer5;         //xy=2267,1755
AudioOutputI2S           i2s1;           //xy=2397,1428
AudioConnection          patchCord1(lfo, 0, multiply2, 1);
AudioConnection          patchCord2(lfo, 0, multiply3, 1);
AudioConnection          patchCord3(lfo, 0, multiply4, 1);
AudioConnection          patchCord4(lfo, 0, multiply5, 1);
AudioConnection          patchCord5(lfo, 0, multiply6, 1);
AudioConnection          patchCord6(lfo, 0, multiply7, 1);
AudioConnection          patchCord7(lfo, 0, multiply8, 1);
AudioConnection          patchCord8(lfo, 0, multiply9, 1);
AudioConnection          patchCord9(lfo, 0, multiply10, 1);
AudioConnection          patchCord10(lfo, 0, multiply11, 1);
AudioConnection          patchCord11(lfo, 0, multiply12, 1);
AudioConnection          patchCord12(lfo, 0, multiply1, 1);
AudioConnection          patchCord13(lfo, 0, multiply13, 1);
AudioConnection          patchCord14(lfo, 0, multiply14, 1);
AudioConnection          patchCord15(lfo, 0, multiply15, 1);
AudioConnection          patchCord16(lfo, 0, multiply16, 1);
AudioConnection          patchCord17(waveformA1, 0, voiceMix1, 0);
AudioConnection          patchCord18(waveformB1, 0, voiceMix1, 1);
AudioConnection          patchCord19(waveformA2, 0, voiceMix2, 0);
AudioConnection          patchCord20(waveformB2, 0, voiceMix2, 1);
AudioConnection          patchCord21(waveformA3, 0, voiceMix3, 0);
AudioConnection          patchCord22(waveformB3, 0, voiceMix3, 1);
AudioConnection          patchCord23(waveformA4, 0, voiceMix4, 0);
AudioConnection          patchCord24(waveformB4, 0, voiceMix4, 1);
AudioConnection          patchCord25(waveformA5, 0, voiceMix5, 0);
AudioConnection          patchCord26(waveformA6, 0, voiceMix6, 0);
AudioConnection          patchCord27(waveformB5, 0, voiceMix5, 1);
AudioConnection          patchCord28(waveformB6, 0, voiceMix6, 1);
AudioConnection          patchCord29(waveformA16, 0, voiceMix16, 0);
AudioConnection          patchCord30(waveformB16, 0, voiceMix16, 1);
AudioConnection          patchCord31(waveformA7, 0, voiceMix7, 0);
AudioConnection          patchCord32(waveformA8, 0, voiceMix8, 0);
AudioConnection          patchCord33(waveformB7, 0, voiceMix7, 1);
AudioConnection          patchCord34(waveformB8, 0, voiceMix8, 1);
AudioConnection          patchCord35(waveformA15, 0, voiceMix15, 0);
AudioConnection          patchCord36(waveformB15, 0, voiceMix15, 1);
AudioConnection          patchCord37(waveformB14, 0, voiceMix14, 1);
AudioConnection          patchCord38(waveformA9, 0, voiceMix9, 0);
AudioConnection          patchCord39(waveformB9, 0, voiceMix9, 1);
AudioConnection          patchCord40(waveformA14, 0, voiceMix14, 0);
AudioConnection          patchCord41(waveformA10, 0, voiceMix10, 0);
AudioConnection          patchCord42(waveformA11, 0, voiceMix11, 0);
AudioConnection          patchCord43(waveformB10, 0, voiceMix10, 1);
AudioConnection          patchCord44(waveformB11, 0, voiceMix11, 1);
AudioConnection          patchCord45(waveformB13, 0, voiceMix13, 1);
AudioConnection          patchCord46(waveformA13, 0, voiceMix13, 0);
AudioConnection          patchCord47(waveformA12, 0, voiceMix12, 0);
AudioConnection          patchCord48(waveformB12, 0, voiceMix12, 1);
AudioConnection          patchCord49(voiceMix1, 0, lfoMix1, 0);
AudioConnection          patchCord50(voiceMix1, 0, multiply1, 0);
AudioConnection          patchCord51(voiceMix2, 0, multiply2, 0);
AudioConnection          patchCord52(voiceMix2, 0, lfoMix2, 0);
AudioConnection          patchCord53(voiceMix3, 0, multiply3, 0);
AudioConnection          patchCord54(voiceMix3, 0, lfoMix3, 0);
AudioConnection          patchCord55(voiceMix4, 0, multiply4, 0);
AudioConnection          patchCord56(voiceMix4, 0, lfoMix4, 0);
AudioConnection          patchCord57(multiply2, 0, lfoMix2, 1);
AudioConnection          patchCord58(voiceMix5, 0, multiply5, 0);
AudioConnection          patchCord59(voiceMix5, 0, lfoMix5, 0);
AudioConnection          patchCord60(multiply3, 0, lfoMix3, 1);
AudioConnection          patchCord61(voiceMix6, 0, multiply6, 0);
AudioConnection          patchCord62(voiceMix6, 0, lfoMix6, 0);
AudioConnection          patchCord63(multiply4, 0, lfoMix4, 1);
AudioConnection          patchCord64(voiceMix7, 0, multiply7, 0);
AudioConnection          patchCord65(voiceMix7, 0, lfoMix7, 0);
AudioConnection          patchCord66(voiceMix8, 0, multiply8, 0);
AudioConnection          patchCord67(voiceMix8, 0, lfoMix8, 0);
AudioConnection          patchCord68(multiply5, 0, lfoMix5, 1);
AudioConnection          patchCord69(multiply6, 0, lfoMix6, 1);
AudioConnection          patchCord70(voiceMix9, 0, multiply9, 0);
AudioConnection          patchCord71(voiceMix9, 0, lfoMix9, 0);
AudioConnection          patchCord72(voiceMix10, 0, multiply10, 0);
AudioConnection          patchCord73(voiceMix10, 0, lfoMix10, 0);
AudioConnection          patchCord74(voiceMix11, 0, multiply11, 0);
AudioConnection          patchCord75(voiceMix11, 0, lfoMix11, 0);
AudioConnection          patchCord76(voiceMix15, 0, multiply15, 0);
AudioConnection          patchCord77(voiceMix15, 0, lfoMix15, 0);
AudioConnection          patchCord78(voiceMix14, 0, multiply14, 0);
AudioConnection          patchCord79(voiceMix14, 0, lfoMix14, 0);
AudioConnection          patchCord80(multiply7, 0, lfoMix7, 1);
AudioConnection          patchCord81(multiply8, 0, lfoMix8, 1);
AudioConnection          patchCord82(voiceMix16, 0, multiply16, 0);
AudioConnection          patchCord83(voiceMix16, 0, lfoMix16, 0);
AudioConnection          patchCord84(voiceMix12, 0, multiply12, 0);
AudioConnection          patchCord85(voiceMix12, 0, lfoMix12, 0);
AudioConnection          patchCord86(voiceMix13, 0, multiply13, 0);
AudioConnection          patchCord87(voiceMix13, 0, lfoMix13, 0);
AudioConnection          patchCord88(multiply9, 0, lfoMix9, 1);
AudioConnection          patchCord89(multiply10, 0, lfoMix10, 1);
AudioConnection          patchCord90(multiply11, 0, lfoMix11, 1);
AudioConnection          patchCord91(multiply16, 0, lfoMix16, 1);
AudioConnection          patchCord92(multiply1, 0, lfoMix1, 1);
AudioConnection          patchCord93(multiply13, 0, lfoMix13, 1);
AudioConnection          patchCord94(multiply14, 0, lfoMix14, 1);
AudioConnection          patchCord95(multiply12, 0, lfoMix12, 1);
AudioConnection          patchCord96(multiply15, 0, lfoMix15, 1);
AudioConnection          patchCord97(lfoMix2, env2);
AudioConnection          patchCord98(lfoMix1, env1);
AudioConnection          patchCord99(lfoMix3, env3);
AudioConnection          patchCord100(lfoMix4, env4);
AudioConnection          patchCord101(lfoMix5, env5);
AudioConnection          patchCord102(lfoMix6, env6);
AudioConnection          patchCord103(lfoMix7, env7);
AudioConnection          patchCord104(lfoMix8, env8);
AudioConnection          patchCord105(lfoMix9, env9);
AudioConnection          patchCord106(lfoMix10, env10);
AudioConnection          patchCord107(lfoMix11, env11);
AudioConnection          patchCord108(lfoMix12, env12);
AudioConnection          patchCord109(env2, 0, preMix1, 1);
AudioConnection          patchCord110(env3, 0, preMix1, 2);
AudioConnection          patchCord111(lfoMix13, env13);
AudioConnection          patchCord112(env4, 0, preMix1, 3);
AudioConnection          patchCord113(lfoMix14, env14);
AudioConnection          patchCord114(lfoMix15, env15);
AudioConnection          patchCord115(env5, 0, preMix2, 0);
AudioConnection          patchCord116(env6, 0, preMix2, 1);
AudioConnection          patchCord117(lfoMix16, env16);
AudioConnection          patchCord118(env1, 0, preMix1, 0);
AudioConnection          patchCord119(env7, 0, preMix2, 2);
AudioConnection          patchCord120(env8, 0, preMix2, 3);
AudioConnection          patchCord121(env9, 0, preMix3, 0);
AudioConnection          patchCord122(env10, 0, preMix3, 1);
AudioConnection          patchCord123(env11, 0, preMix3, 2);
AudioConnection          patchCord124(env12, 0, preMix3, 3);
AudioConnection          patchCord125(preMix1, 0, finalMix1, 0);
AudioConnection          patchCord126(env13, 0, preMix4, 0);
AudioConnection          patchCord127(preMix2, 0, finalMix1, 1);
AudioConnection          patchCord128(env14, 0, preMix4, 1);
AudioConnection          patchCord129(env15, 0, preMix4, 2);
AudioConnection          patchCord130(env16, 0, preMix4, 3);
AudioConnection          patchCord131(preMix3, 0, finalMix1, 2);
AudioConnection          patchCord132(preMix4, 0, finalMix1, 3);
AudioConnection          patchCord133(mixer6, biquad1);
AudioConnection          patchCord134(finalMix1, 0, mixer6, 0);
AudioConnection          patchCord135(finalMix1, 0, mixer4, 1);
AudioConnection          patchCord136(biquad1, 0, mixer4, 0);
AudioConnection          patchCord137(playMem1, 0, mixer5, 0);
AudioConnection          patchCord138(playMem3, 0, mixer5, 2);
AudioConnection          patchCord139(playMem4, 0, mixer5, 3);
AudioConnection          patchCord140(playMem2, 0, mixer5, 1);
AudioConnection          patchCord141(mixer4, 0, i2s1, 0);
AudioConnection          patchCord142(mixer4, 0, i2s1, 1);
AudioConnection          patchCord143(mixer5, 0, mixer4, 2);
AudioConnection          patchCord144(mixer5, 0, mixer6, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=178,151
// GUItool: end automatically generated code

//AUDIO
float freqChart[16]
{
  27.5, 29.13524, 30.86771, 32.7032, 34.64783, 36.7081, 38.89087, 41.20344, 43.65353, 46.2493, 48.99943, 51.91309, 55, 58.27047, 61.73541, 65.40639
};
int octave = 2;
int waveformA_type = WAVEFORM_SINE;
int waveformB_type = WAVEFORM_SINE;
int lfo_type = WAVEFORM_SINE;

//drumpad
bool drum = false;

//POTS-MUX
const int selectPins[3] = {

//Buttons/Switches
Bounce drumSwitch = Bounce(0, 15);
Bounce seqSwitch = Bounce(1, 15);
Bounce octaveDown = Bounce(3, 15);
Bounce octaveUp = Bounce(4, 15);
Bounce resetSeq = Bounce(17, 15);
Bounce pageDown = Bounce(39, 15);
Bounce pageUp = Bounce(38, 15);
Bounce playPause = Bounce(16, 15);

//Button Pad
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'A', 'B', 'C', 'D'},
  {'E', 'F', 'G', 'H'},
  {'I', 'J', 'K', 'L'},
  {'M', 'N', 'O', 'P'},
};
byte colPins[COLS] = {27, 26, 25, 24};
byte rowPins[ROWS] = {31, 30, 29, 28};
Keypad keypad = Keypad (makeKeymap(keys), rowPins, colPins, ROWS, COLS);
Keypad kpd = Keypad (makeKeymap(keys), rowPins, colPins, ROWS, COLS);
String msg;

//Encoders

//Sequencer
int page;
int seqStep = 0;
int prevSeqStep = 15;
int tempo;
int msDelay;
Metro beat = Metro(1000);
bool playControl = false;
bool seq = false;
bool kick1Steps[16] {false};
bool kick2Steps[16] {false};
bool kick3Steps[16] {false};
bool kick4Steps[16] {false};
bool snare1Steps[16] {false};
bool snare2Steps[16] {false};
bool snare3Steps[16] {false};
bool snare4Steps[16] {false};
bool hh1Steps[16] {false};
bool hh2Steps[16] {false};
bool hh3Steps[16] {false};
bool hh4Steps[16] {false};
bool clap1Steps[16] {false};
bool clap2Steps[16] {false};
bool clap3Steps[16] {false};
bool clap4Steps[16] {false};

//DISPLAY
ILI9341_t3 tft = ILI9341_t3(TFT_CS, TFT_DC, TFT_RST, TFT_MOSI, TFT_SCLK, TFT_MISO);


void setup() {
  AudioMemory(160);
  Serial.begin(115200);
  delay(100);
  Serial.println("Startup Success");

  //Touchscreen
  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(ILI9341_WHITE);
  tft.setCursor(0,0);
  tft.setTextColor(ILI9341_BLACK);
  tft.setTextSize(3.5);
  tft.setCursor(15,150);
  tft.print("THE BEAN MACHINE");
  delay(1500);
  tft.fillScreen(ILI9341_WHITE);
  tft.setCursor(120,150);
  tft.print("v.0.5");
  delay(1500);
  tft.fillScreen(ILI9341_WHITE);
  tft.setCursor(45,150);
  tft.print("PROGRAMMED BY");
  delay(1500);
  tft.fillScreen(ILI9341_WHITE);
  tft.setCursor(60,150);
  tft.print("BEN SCHNUCK");
  delay(1500);
  tft.fillScreen(ILI9341_WHITE);

  //pots

  //buttons
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);
  pinMode(38, INPUT_PULLUP);
  pinMode(39, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);

  seqSwitch.update();
  playPause.update();
  drumSwitch.update();
  octaveDown.update();
  octaveUp.update();
  pageDown.update();
  pageUp.update();

  delay(100);
  Serial.println("Button Setup Complete");

  //button pad
  delay(200);
  Serial.println("Buttonpad instantiated");

  //encoders

  //audio
  sgtl5000_1.enable();
  sgtl5000_1.volume(1);

  waveformA1.begin(.25, 440, waveformA_type);
  waveformB1.begin(.25, 440, waveformB_type);
  waveformA2.begin(.25, 440, waveformA_type);
  waveformB2.begin(.25, 440, waveformB_type);
  waveformA3.begin(.25, 440, waveformA_type);
  waveformB3.begin(.25, 440, waveformB_type);
  waveformA4.begin(.25, 440, waveformA_type);
  waveformB4.begin(.25, 440, waveformB_type);
  waveformA5.begin(.25, 440, waveformA_type);
  waveformB5.begin(.25, 440, waveformB_type);
  waveformA6.begin(.25, 440, waveformA_type);
  waveformB6.begin(.25, 440, waveformB_type);
  waveformA7.begin(.25, 440, waveformA_type);
  waveformB7.begin(.25, 440, waveformB_type);
  waveformA8.begin(.25, 440, waveformA_type);
  waveformB8.begin(.25, 440, waveformB_type);
  waveformA9.begin(.25, 440, waveformA_type);
  waveformB9.begin(.25, 440, waveformB_type);
  waveformA10.begin(.25, 440, waveformA_type);
  waveformB10.begin(.25, 440, waveformB_type);
  waveformA11.begin(.25, 440, waveformA_type);
  waveformB11.begin(.25, 440, waveformB_type);
  waveformA12.begin(.25, 440, waveformA_type);
  waveformB12.begin(.25, 440, waveformB_type);
  waveformA13.begin(.25, 440, waveformA_type);
  waveformB13.begin(.25, 440, waveformB_type);
  waveformA14.begin(.25, 440, waveformA_type);
  waveformB14.begin(.25, 440, waveformB_type);
  waveformA15.begin(.25, 440, waveformA_type);
  waveformB15.begin(.25, 440, waveformB_type);
  waveformA16.begin(.25, 440, waveformA_type);
  waveformB16.begin(.25, 440, waveformB_type);

  for (int i = 0; i < 5; i++) {
    voiceMix1.gain(i, .1);
    voiceMix2.gain(i, .1);
    voiceMix3.gain(i, .1);
    voiceMix4.gain(i, .1);
    voiceMix5.gain(i, .1);
    voiceMix6.gain(i, .1);
    voiceMix7.gain(i, .1);
    voiceMix8.gain(i, .1);
    voiceMix9.gain(i, .1);
    voiceMix10.gain(i, .1);
    voiceMix11.gain(i, .1);
    voiceMix12.gain(i, .1);
    voiceMix13.gain(i, .1);
    voiceMix14.gain(i, .1);
    voiceMix15.gain(i, .1);
    voiceMix16.gain(i, .1);
    preMix1.gain(i, .1);
    preMix2.gain(i, .1);
    preMix3.gain(i, .1);
    preMix4.gain(i, .1);
  }

  lfo.begin(2, 3, lfo_type);
  
  //biquad1.setLowpass(0, 800, 0.707);

  delay(200);
  Serial.println("Audio Instantiated");

  //sequencer

}

void loop() {
  for (int j = 0; j < 5; j++)
  {
    //POTS
    if (j == 0)
    {
      for(byte pin=0; pin<=7; pin++) {
        selectMuxPin(pin);
        switch (pin) {
          case 0:
              int lfoFreq = analogRead(A13);
              lfo.frequency(lfoFreq);
          break;
          case 1:
              msDelay = analogRead(A13);
              beat.interval(msDelay);
              tempo = 60,000 / msDelay;
          break;
          case 2:
              int envAttack = analogRead(A13) * 2;
              env1.attack(envAttack);  
              env2.attack(envAttack);
              env3.attack(envAttack);
              env4.attack(envAttack);
              env5.attack(envAttack);
              env6.attack(envAttack);
              env7.attack(envAttack);
              env8.attack(envAttack);
              env9.attack(envAttack);
              env10.attack(envAttack);
              env11.attack(envAttack);
              env12.attack(envAttack);
              env13.attack(envAttack);
              env14.attack(envAttack);
              env15.attack(envAttack);
              env16.attack(envAttack);
          break;
          case 3:
              int envHold = analogRead(A13);
              env1.hold(envHold);  
              env2.hold(envHold);
              env3.hold(envHold);
              env4.hold(envHold);
              env5.hold(envHold);
              env6.hold(envHold);
              env7.hold(envHold);
              env8.hold(envHold);
              env9.hold(envHold);
              env10.hold(envHold);
              env11.hold(envHold);
              env12.hold(envHold);
              env13.hold(envHold);
              env14.hold(envHold);
              env15.hold(envHold);
              env16.hold(envHold);
          break;
          case 4:
              int envDecay = analogRead(A13);
              env1.decay(envDecay);  
              env2.decay(envDecay);
              env3.decay(envDecay);
              env4.decay(envDecay);
              env5.decay(envDecay);
              env6.decay(envDecay);
              env7.decay(envDecay);
              env8.decay(envDecay);
              env9.decay(envDecay);
              env10.decay(envDecay);
              env11.decay(envDecay);
              env12.decay(envDecay);
              env13.decay(envDecay);
              env14.decay(envDecay);
              env15.decay(envDecay);
              env16.decay(envDecay);
          break;
          case 5:
              float envSustain = analogRead(A13); / 1000
              env1.sustain(envSustain);  
              env2.sustain(envSustain);
              env3.sustain(envSustain);
              env4.sustain(envSustain);
              env5.sustain(envSustain);
              env6.sustain(envSustain);
              env7.sustain(envSustain);
              env8.sustain(envSustain);
              env9.sustain(envSustain);
              env10.sustain(envSustain);
              env11.sustain(envSustain);
              env12.sustain(envSustain);
              env13.sustain(envSustain);
              env14.sustain(envSustain);
              env15.sustain(envSustain);
              env16.sustain(envSustain);
          break;
          case 6:
              int envRelease = analogRead(A13) * 2;
              env1.decay(envRelease);  
              env2.decay(envRelease);
              env3.decay(envRelease);
              env4.decay(envRelease);
              env5.decay(envRelease);
              env6.decay(envRelease);
              env7.decay(envRelease);
              env8.decay(envRelease);
              env9.decay(envRelease);
              env10.decay(envRelease);
              env11.decay(envRelease);
              env12.decay(envRelease);
              env13.decay(envRelease);
              env14.decay(envRelease);
              env15.decay(envRelease);
              env16.decay(envRelease);
          break;
          case 7:
              float waveshapeVal = (analogRead(A13) / 500) - 1;
              waveshape1.shape(waveshapeVal, 17);
          break;
        }
      }
    }
    //BUTTONS
    if (j == 1)
    {
      drumSwitch.update();
      seqSwitch.update();
      playPause.update();
      octaveDown.update();
      octaveUp.update();
      pageDown.update();
      pageUp.update();
      resetSeq.update();

      if (playPause.fallingEdge())
      {
        playControl = !playControl;
        if (playControl == false) {
          Serial.println("PAUSE");
        }
        if (playControl == true) {
          page = 0;
          seqStep = 0;
          Serial.println("PLAY");
        }
      }

      if (resetSeq.fallingEdge())
      {
        seqReset();
        Serial.println("RESET");
      }

      if (drumSwitch.fallingEdge()) {
        Serial.println("Drum Mode on");
        drum = true;
      }
      if (drumSwitch.risingEdge()) {
        Serial.println("Drum Mode off");
        drum = false;
      }
      if (seqSwitch.fallingEdge()) {
        Serial.println("Sequence Mode on");
        seq = true;
      }
      if (seqSwitch.risingEdge()) {
        Serial.println("Sequence Mode off");
        seq = false;
      }
      if (octaveUp.fallingEdge()) {
        octave++;
        Serial.print("Octave: ");
        Serial.println(octave);
        if (octave <= 0)
        {
          octave = 1;
        } 
      }
      if (octaveDown.fallingEdge()) {
        octave--;
        Serial.print("Octave: ");
        Serial.println(octave);
        if (octave >= 9)
        {
          octave = 8;
        }
      }
      if (pageUp.fallingEdge()) {
        page++;
        if (page > 15)
        {
          page = 15;
        }
        Serial.print("Step: ");
        Serial.println(page + 1);
      }
      if (pageDown.fallingEdge()) {
        page--;
        if (page < 0)
        {
          page = 0;
        }
        Serial.print("Step: ");
        Serial.println(page + 1);
      }

    }
    if (j == 3)
    {
      if (keypad.getKeys())
      {

        for (int i = 0; i < LIST_MAX; i++) // Scan the whole key list.
        {
          if (keypad.key[i].stateChanged)
          {
            if (drum == false)
            {
              switch (keypad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
                case PRESSED:
                  msg = " PRESSED.";
                  switch (keypad.key[i].kchar) {
                    case 'A':
                      waveformA1.frequency(freqChart[0] * octave);
                      waveformB1.frequency(freqChart[0] * octave);
                      env1.noteOn();
                      break;
                    case 'B':
                      waveformA2.frequency(freqChart[1] * octave);
                      waveformB2.frequency(freqChart[1] * octave);
                      env2.noteOn();
                      break;

                    case 'C':
                      waveformA3.frequency(freqChart[2] * octave);
                      waveformB3.frequency(freqChart[2] * octave);
                      env3.noteOn();
                      break;
                    case 'D':
                      waveformA4.frequency(freqChart[3] * octave);
                      waveformB4.frequency(freqChart[3] * octave);
                      env4.noteOn();
                      break;
                    case 'E':
                      waveformA5.frequency(freqChart[4] * octave);
                      waveformB5.frequency(freqChart[4] * octave);
                      env5.noteOn();
                      break;
                    case 'F':
                      waveformA6.frequency(freqChart[5] * octave);
                      waveformB6.frequency(freqChart[5] * octave);
                      env6.noteOn();
                      break;
                    case 'G':
                      waveformA7.frequency(freqChart[6] * octave);
                      waveformB7.frequency(freqChart[6] * octave);
                      env7.noteOn();
                      break;
                    case 'H':
                      waveformA8.frequency(freqChart[7] * octave);
                      waveformB8.frequency(freqChart[7] * octave);
                      env8.noteOn();
                      break;
                    case 'I':
                      waveformA9.frequency(freqChart[8] * octave);
                      waveformB9.frequency(freqChart[8] * octave);
                      env9.noteOn();
                      break;
                    case 'J':
                      waveformA10.frequency(freqChart[9] * octave);
                      waveformB10.frequency(freqChart[9] * octave);
                      env10.noteOn();
                      break;
                    case 'K':
                      waveformA11.frequency(freqChart[10] * octave);
                      waveformB11.frequency(freqChart[10] * octave);
                      env11.noteOn();
                      break;
                    case 'L':
                      waveformA12.frequency(freqChart[11] * octave);
                      waveformB12.frequency(freqChart[11] * octave);
                      env12.noteOn();
                      break;
                    case 'M':
                      waveformA13.frequency(freqChart[12] * octave);
                      waveformB13.frequency(freqChart[12] * octave);
                      env13.noteOn();
                      break;
                    case 'N':
                      waveformA14.frequency(freqChart[13] * octave);
                      waveformB14.frequency(freqChart[13] * octave);
                      env14.noteOn();
                      break;
                    case 'O':
                      waveformA15.frequency(freqChart[14] * octave);
                      waveformB15.frequency(freqChart[14] * octave);
                      env15.noteOn();
                      break;
                    case 'P':
                      waveformA16.frequency(freqChart[15] * octave);
                      waveformB16.frequency(freqChart[15] * octave);
                      env16.noteOn();
                      break;
                  }
                  break;
                case HOLD:
                  msg = " HOLD.";
                  break;
                case RELEASED:
                  msg = " RELEASED.";
                  switch (keypad.key[i].kchar) {
                    case 'A':
                      env1.noteOff();
                      break;
                    case 'B':
                      env2.noteOff();
                      break;
                    case 'C':
                      env3.noteOff();
                      break;
                    case 'D':
                      env4.noteOff();
                      break;
                    case 'E':
                      env5.noteOff();
                      break;
                    case 'F':
                      env6.noteOff();
                      break;
                    case 'G':
                      env7.noteOff();
                      break;
                    case 'H':
                      env8.noteOff();
                      break;
                    case 'I':
                      env9.noteOff();
                      break;
                    case 'J':
                      env10.noteOff();
                      break;
                    case 'K':
                      env11.noteOff();
                      break;
                    case 'L':
                      env12.noteOff();
                      break;
                    case 'M':
                      env13.noteOff();
                      break;
                    case 'N':
                      env14.noteOff();
                      break;
                    case 'O':
                      env15.noteOff();
                      break;
                    case 'P':
                      env16.noteOff();
                      break;
                  }
                  break;
                case IDLE:
                  msg = " IDLE.";
              }
              Serial.print("Key ");
              Serial.print(keypad.key[i].kchar);
              Serial.println(msg);
            }
            else if (drum == true)
            {
              switch (keypad.key[i].kstate) {
                case PRESSED:
                  msg = " PRESSED.";
                  if (keypad.key[i].kchar == 'A')
                  {
                    playMem1.play(AudioSampleKick1);
                  }
                  if (keypad.key[i].kchar == 'B')
                  {
                    playMem1.play(AudioSampleKick2);
                  }
                  if (keypad.key[i].kchar == 'C')
                  {
                    playMem1.play(AudioSampleKick3);
                  }
                  if (keypad.key[i].kchar == 'D')
                  {
                    playMem1.play(AudioSampleKick4);
                  }
                  if (keypad.key[i].kchar == 'E')
                  {
                    playMem2.play(AudioSampleSnare1);
                  }
                  if (keypad.key[i].kchar == 'F')
                  {
                    playMem2.play(AudioSampleSnare2);
                  }
                  if (keypad.key[i].kchar == 'G')
                  {
                    playMem2.play(AudioSampleSnare3);
                  }
                  if (keypad.key[i].kchar == 'H')
                  {
                    playMem2.play(AudioSampleSnare4);
                  }
                  if (keypad.key[i].kchar == 'I')
                  {
                    playMem3.play(AudioSampleClap1);
                  }
                  if (keypad.key[i].kchar == 'J')
                  {
                    playMem3.play(AudioSampleClap2);
                  }
                  if (keypad.key[i].kchar == 'K')
                  {
                    playMem3.play(AudioSampleClap3);
                  }
                  if (keypad.key[i].kchar == 'L')
                  {
                    playMem3.play(AudioSampleClap4);
                  }
                  if (keypad.key[i].kchar == 'M')
                  {
                    playMem4.play(AudioSampleHh1);
                  }
                  if (keypad.key[i].kchar == 'N')
                  {
                    playMem4.play(AudioSampleHh2);
                  }
                  if (keypad.key[i].kchar == 'O')
                  {
                    playMem4.play(AudioSampleHh3);
                  }
                  if (keypad.key[i].kchar == 'P')
                  {
                    playMem4.play(AudioSampleHh4);
                  }
                  break;
                case HOLD:
                  msg = " HOLD.";
                  break;
                case RELEASED:
                  msg = " RELEASED.";
                  break;
                case IDLE:
                  msg = " IDLE.";
              }
            }
          }
        }
      }
    }
    if (j == 4)
    {
      for (int i = 0; i < 2; i++)
      {
        if (i == 0)
        {
          if (seq && !playControl)
          {
            if (kpd.getKeys())
            {
              for (int k = 0; k < LIST_MAX; k++)
              {
                if (kpd.key[k].stateChanged)
                {
                  switch (kpd.key[k].kstate)
                  {
                    case PRESSED:
                      if (kpd.key[k].kchar == 'A')
                      {
                        kick1Steps[page] = !kick1Steps[page];
                        Serial.print("Kick 1: ");
                        Serial.println((bool)kick1Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'B')
                      {
                        kick2Steps[page] = !kick2Steps[page];
                        Serial.print("Kick 2: ");
                        Serial.println(kick2Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'C')
                      {
                        kick3Steps[page] = !kick3Steps[page];
                        Serial.print("Kick 3: ");
                        Serial.println(kick3Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'D')
                      {
                        kick4Steps[page] = !kick4Steps[page];
                        Serial.print("Kick 4: ");
                        Serial.println(kick4Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'E')
                      {
                        snare1Steps[page] = !snare1Steps[page];
                        Serial.print("Snare 1: ");
                        Serial.println(snare1Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'F')
                      {
                        snare2Steps[page] = !snare2Steps[page];
                        Serial.print("Snare 2: ");
                        Serial.println(snare2Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'G')
                      {
                        snare3Steps[page] = !snare3Steps[page];
                        Serial.print("Snare 3: ");
                        Serial.println(snare3Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'H')
                      {
                        snare4Steps[page] = !snare4Steps[page];
                        Serial.print("Snare 4: ");
                        Serial.println(snare4Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'I')
                      {
                        clap1Steps[page] = !clap1Steps[page];
                        Serial.print("Clap 1: ");
                        Serial.println(clap1Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'J')
                      {
                        clap2Steps[page] = !clap2Steps[page];
                        Serial.print("Clap 2: ");
                        Serial.println(clap2Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'K')
                      {
                        clap3Steps[page] = !clap3Steps[page];
                        Serial.print("Clap 3: ");
                        Serial.println(clap3Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'L')
                      {
                        clap4Steps[page] = !clap4Steps[page];
                        Serial.print("Clap 4: ");
                        Serial.println(clap4Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'M')
                      {
                        hh1Steps[page] = !hh1Steps[page];
                        Serial.print("Hi Hat 1: ");
                        Serial.println(hh1Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'N')
                      {
                        hh2Steps[page] = !hh2Steps[page];
                        Serial.print("Hi Hat 2: ");
                        Serial.println(hh2Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'O')
                      {
                        hh3Steps[page] = !hh3Steps[page];
                        Serial.print("Hi Hat 3: ");
                        Serial.println(hh3Steps[page]);
                      }
                      if (kpd.key[k].kchar == 'P')
                      {
                        hh4Steps[page] = !hh4Steps[page];
                        Serial.print("Hi Hat 4: ");
                        Serial.println(hh4Steps[page]);
                      }
                      break;
                  }
                }
              }
            }
          }
        }
        if (i == 1)
        {
          if (playControl == true && seq == false)
          {

            if (beat.check())
            {
              beat.reset();
              seqStep++;
              Serial.print("Beat: ");
              Serial.println(seqStep);
            }
            if (seqStep >= 16)
            {
              seqStep = 0;
            }
            if (abs(seqStep - prevSeqStep) > 0)
            {
              if (kick1Steps[seqStep])
              {
                playMem1.play(AudioSampleKick1);
              }
              if (kick2Steps[seqStep])
              {
                playMem1.play(AudioSampleKick2);
              }
              if (kick3Steps[seqStep])
              {
                playMem1.play(AudioSampleKick3);
              }
              if (kick4Steps[seqStep])
              {
                playMem1.play(AudioSampleKick4);
              }
              if (snare1Steps[seqStep])
              {
                playMem2.play(AudioSampleSnare1);
              }
              if (snare2Steps[seqStep])
              {
                playMem2.play(AudioSampleSnare2);
              }
              if (snare3Steps[seqStep])
              {
                playMem2.play(AudioSampleSnare3);
              }
              if (snare4Steps[seqStep])
              {
                playMem2.play(AudioSampleSnare4);
              }
              if (clap1Steps[seqStep])
              {
                playMem3.play(AudioSampleClap1);
              }
              if (clap2Steps[seqStep])
              {
                playMem3.play(AudioSampleClap2);
              }
              if (clap3Steps[seqStep])
              {
                playMem3.play(AudioSampleClap3);
              }
              if (clap4Steps[seqStep])
              {
                playMem3.play(AudioSampleClap4);
              }
              if (hh1Steps[seqStep])
              {
                playMem4.play(AudioSampleHh1);
              }
              if (hh2Steps[seqStep])
              {
                playMem4.play(AudioSampleHh2);
              }
              if (hh3Steps[seqStep])
              {
                playMem4.play(AudioSampleHh3);
              }
              if (hh4Steps[seqStep])
              {
                playMem4.play(AudioSampleHh4);
              }
            }
            prevSeqStep = seqStep;
          }
        }
      }
    }
  }
}

void seqReset ()
{
  page = 0;
  for (int o = 0; o < 16; o++)
  {
    kick1Steps[o] = false;
    kick2Steps[o] = false;
    kick3Steps[o] = false;
    kick4Steps[o] = false;
    snare1Steps[o] = false;
    snare2Steps[o] = false;
    snare3Steps[o] = false;
    snare4Steps[o] = false;
    hh1Steps[o] = false;
    hh2Steps[o] = false;
    hh3Steps[o] = false;
    hh4Steps[o] = false;
    clap1Steps[o] = false;
    clap2Steps[o] = false;
    clap3Steps[o] = false;
    clap4Steps[o] = false;
  }
}
                
void selectMuxPin(byte pin)
{
  for (int i=0; i<3; i++)
  {
    if (pin & (1<<i))
      digitalWrite(selectPins[i], HIGH);
    else
      digitalWrite(selectPins[i], LOW);
  }
}
