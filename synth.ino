#include <Bounce.h>
#include <Keypad.h>
#include <Metro.h>

Metro beat = Metro(500);

int page = 1;
bool seqSwitch = false;
bool playControl = false;
bool kick1Steps[16]{false};
bool kick2Steps[16]{false};
bool kick3Steps[16]{false};
bool kick4Steps[16]{false};
bool snare1Steps[16]{false};
bool snare2Steps[16]{false};
bool snare3Steps[16]{false};
bool snare4Steps[16]{false};
bool hh1Steps[16]{false};
bool hh2Steps[16]{false};
bool hh3Steps[16]{false};
bool hh4Steps[16]{false};
bool clap1Steps[16]{false};
bool clap2Steps[16]{false};
bool clap3Steps[16]{false};
bool clap4Steps[16]{false};

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
{'A','B','C','D'},
{'E','F','G','H'},
{'I','J','K','L'},
{'M','N','O','P'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the kpd
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the kpd

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup()
{
  
}
void loop()
{
  for (int j=0; j<4; j++)
  {
    if(j == 0)
    {
      //pots
    }
    if(j == 1)
    {
      //buttons and switches
    }
    if(j == 2)
    {
      //keypad
    }
    if(j == 3)
    {
      if(seqSwitch == true && playControl == false)
      {
        if(page => 17)
        {
          page = 16;  
        }
        if(page <= 0)
        {
          page = 1;
        }
        if(keypad.getKeys())
        {
          for(int i=0; i<LIST_MAX; i++)
          {
            if(keypad.key[i].stateChanged)
            {
              switch(keypad.key[i].kstate)
              {
                case PRESSED:
                  if(keypad.key[i].kchar = 'A')
                  {
                      kick1Steps[page] = !kick1Steps[page];
                  }
                  if(keypad.key[i].kchar = 'B')
                  {
                      kick2Steps[page] = !kick2Steps[page];
                  }
                  if(keypad.key[i].kchar = 'C')
                  {
                      kick3Steps[page] = !kick3Steps[page];
                  }
                  if(keypad.key[i].kchar = 'D')
                  {
                      kick4Steps[page] = !kick4Steps[page];
                  }
                  if(keypad.key[i].kchar = 'E')
                  {
                      snare1Steps[page] = !snare1Steps[page];
                  }
                  if(keypad.key[i].kchar = 'F')
                  {
                      snare2Steps[page] = !snare2Steps[page];
                  }
                  if(keypad.key[i].kchar = 'G')
                  {
                      snare3Steps[page] = !snare3Steps[page];
                  }
                  if(keypad.key[i].kchar = 'H')
                  {
                      snare4Steps[page] = !snare4Steps[page];
                  }
                  if(keypad.key[i].kchar = 'I')
                  {
                      hh1Steps[page] = !hh1Steps[page];
                  }
                  if(keypad.key[i].kchar = 'J')
                  {
                      hh2Steps[page] = !hh2Steps[page];
                  }
                  if(keypad.key[i].kchar = 'K')
                  {
                      hh3Steps[page] = !hh3Steps[page];
                  }
                  if(keypad.key[i].kchar = 'L')
                  {
                      hh4Steps[page] = !hh4Steps[page];
                  }
                  if(keypad.key[i].kchar = 'M')
                  {
                      clap1Steps[page] = !clap1Steps[page];
                  }
                  if(keypad.key[i].kchar = 'N')
                  {
                      clap2Steps[page] = !clap2Steps[page];
                  }
                  if(keypad.key[i].kchar = 'O')
                  {
                      clap3Steps[page] = !clap3Steps[page];
                  }
                  if(keypad.key[i].kchar = 'P')
                  {
                      clap4Steps[page] = !clap4Steps[page];
                  }
                  break;
              }
            }
          }
        }
      }
      if(playControl == true && seqSwitch == false)
      {
        for(i=0; i<17; i++)
        {
            if(beat.check())
            {
              if(kick1Steps[i])
              {
                  playMem1.play(kick1);
              }
              if(kick2Steps[i])
              {
                  playMem1.play(kick2);
              }
              if(kick3Steps[i])
              {
                  playMem1.play(kick3);
              }
              if(kick4Steps[i])
              {
                  playMem1.play(kick4);
              }
              if(snare1Steps[i])
              {
                  playMem2.play(snare1);
              }
              if(snare2Steps[i])
              {
                  playMem2.play(snare2);
              }
              if(snare3Steps[i])
              {
                  playMem2.play(snare3);
              }
              if(snare4Steps[i])
              {
                  playMem2.play(snare4);
              }
              if(hh1Steps[i])
              {
                  play(hh1);
              }
              if(hh2Steps[i])
              {
                  playMem3.play(hh2);
              }
              if(hh3Steps[i])
              {
                  playMem3.play(hh3);
              }
              if(hh4Steps[i])
              {
                  playMem3.play(hh4);
              }
              if(clap1Steps[i])
              {
                  playMem4.play(clap1);
              }
              if(clap1Steps[i])
              {
                  playMem4.play(clap2);
              }
              if(clap1Steps[i])
              {
                  playMem4.play(clap3);
              }
              if(clap1Steps[i])
              {
                  playMem4.play(clap4);
              }
            }
          }
        }
      }
    }
  }
}
