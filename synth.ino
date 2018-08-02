#include <Bounce.h>
#include <Keypad.h>
#include <Metro.h>

Metro beat = Metro(500);

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

//[x][y] x refers to row, y refers to column
bool drumSteps[16][16] {
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false},
  {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}
};

void setup()
{
  
}
void loop()
{
  for (int j=0; j<4; j++)
  {
    if(j == 0)
    {
      
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
      if(seqSwitch)
      {
          
      }
      if(playControl)
      {
        for(i=0; i<17; i++)
        {
            if(beat.check())
            {
              if(kick1Steps[i])
              {
                  
              }
              if(kick2Steps[i])
              {
                  
              }
              if(kick3Steps[i])
              {
                  
              }
              if(kick4Steps[i])
              {
                  
              }
              if(snare1Steps[i])
              {
                  
              }
              if(snare2Steps[i])
              {
                  
              }
              if(snare3Steps[i])
              {
                  
              }
              if(snare4Steps[i])
              {
                  
              }
              if(hh1Steps[i])
              {
                  
              }
              if(hh2Steps[i])
              {
                  
              }
              if(hh3Steps[i])
              {
                  
              }
              if(hh4Steps[i])
              {
                  
              }
              if(clap1Steps[i])
              {
                  
              }
              if(clap1Steps[i])
              {
                  
              }
              if(clap1Steps[i])
              {
                  
              }
              if(clap1Steps[i])
              {
                  
              }
            }
        }
      }
    }
  }
}
