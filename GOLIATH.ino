#include <Bounce.h>
#include <Keypad.h>
#include <Metro.h>

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
  220, 233.0819, 246.9417, 261.6256, 277.1826, 293.6648, 311.127, 329.6276, 349.6276, 369.9944, 391.9954, 415.3047, 440, 466.1638, 493.883, 523.2511
};
int octave = 2;
int waveformA_type = WAVEFORM_SINE;
int waveformB_type = WAVEFORM_SINE;
int lfo_type = WAVEFORM_SINE;

//drumpad
bool drum = false;

//POTS

//Buttons/Switches
Bounce drumSwitch = Bounce(0, 15);

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
byte rowPins[ROWS] = {31, 32, 29, 28};
Keypad keypad = Keypad (makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String msg;

//Encoders

//Sequencer


void setup() {
  AudioMemory(160);
  Serial.begin(115200);
  delay(100);
  Serial.println("Startup Success");

  //pots

  //buttons
  pinMode(0, INPUT_PULLUP);

  drumSwitch.update();

  delay(100);
  Serial.println("Button Setup Complete");

  //button pad
  delay(200);
  Serial.println("Buttonpad instantiated");

  //encoders

  //audio

  //audio
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.8);

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
    voiceMix1.gain(i, .25);
    voiceMix2.gain(i, .25);
    voiceMix3.gain(i, .25);
    voiceMix4.gain(i, .25);
    voiceMix5.gain(i, .25);
    voiceMix6.gain(i, .25);
    voiceMix7.gain(i, .25);
    voiceMix8.gain(i, .25);
    voiceMix9.gain(i, .25);
    voiceMix10.gain(i, .25);
    voiceMix11.gain(i, .25);
    voiceMix12.gain(i, .25);
    voiceMix13.gain(i, .25);
    voiceMix14.gain(i, .25);
    voiceMix15.gain(i, .25);
    voiceMix16.gain(i, .25);
    preMix1.gain(i, .25);
    preMix2.gain(i, .25);
    preMix3.gain(i, .25);
    preMix4.gain(i, .25);
  }

  lfo.begin(2, 3, lfo_type);



  //  biquad1.setLowpass(0, 800, 0.707);

  delay(200);
  Serial.println("Audio Instantiated");

  //sequencer

}

void loop() {
  for (int j = 0; j < 4; j++)
  {
    //POTS
    if (j == 0)
    {
      int lfoFreq = analogRead(A14);
      lfo.frequency(lfoFreq / 100);
      
    }
    //BUTTONS
    if (j == 1)
    {
      drumSwitch.update();

      if (drumSwitch.fallingEdge()) {
        Serial.println("Drum Mode on");
        drum = true;
      }
      if (drumSwitch.risingEdge()) {
        Serial.println("Drum Mode off");
        drum = false;
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

            //            else if (drum == true)
            //            {
            //              switch (keypad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            //                case PRESSED:
            //                  msg = " PRESSED.";
            //                  if (keypad.key[i].kchar == '1')
            //                  {
            //                    playMem1.play(AudioSampleKick1);
            //                  }
            //                  if (keypad.key[i].kchar == '2')
            //                  {
            //                    playMem1.play(AudioSampleKick2);
            //                  }
            //                  if (keypad.key[i].kchar == '3')
            //                  {
            //                    playMem1.play(AudioSampleKick3);
            //                  }
            //                  if (keypad.key[i].kchar == '4')
            //                  {
            //                    playMem2.play(AudioSampleSnare1);
            //                  }
            //                  if (keypad.key[i].kchar == '5')
            //                  {
            //                    playMem2.play(AudioSampleSnare2);
            //                  }
            //                  if (keypad.key[i].kchar == '6')
            //                  {
            //                    playMem2.play(AudioSampleSnare3);
            //                  }
            //                  if (keypad.key[i].kchar == '7')
            //                  {
            //                    playMem3.play(AudioSampleClap1);
            //                  }
            //                  if (keypad.key[i].kchar == '8')
            //                  {
            //                    playMem3.play(AudioSampleClap2);
            //                  }
            //                  if (keypad.key[i].kchar == '9')
            //                  {
            //                    playMem3.play(AudioSampleClap3);
            //                  }
            //                  if (keypad.key[i].kchar == '*')
            //                  {
            //                    playMem4.play(AudioSampleHh1);
            //                  }
            //                  if (keypad.key[i].kchar == '0')
            //                  {
            //                    playMem4.play(AudioSampleHh2);
            //                  }
            //                  if (keypad.key[i].kchar == '#')
            //                  {
            //                    playMem4.play(AudioSampleHh3);
            //                  }
            //                  break;
            //                case HOLD:
            //                  msg = " HOLD.";
            //                  break;
            //                case RELEASED:
            //                  msg = " RELEASED.";
            //                  break;
            //                case IDLE:
            //                  msg = " IDLE.";
          }
        }
      }
    }
  }
}


