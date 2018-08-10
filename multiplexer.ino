const int selectPins[3] = {30, 29, 28};
const int zInput1 = A13;
const int zInput2 = A14;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(29, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(31, OUTPUT);

  delayMicroseconds(50);
  
  digitalWrite(29, HIGH);
  digitalWrite(30, HIGH);
  digitalWrite(31, HIGH);
  
  // allow 50 us for signals to stablize
  delayMicroseconds(50);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(byte pin=0; pin<=7; pin++) {
    selectMuxPin(pin);
    int inputVal1;
    int inputVal2;
    inputVal1 = analogRead(zInput1);
    inputVal2 = analogRead(zInput2);
    Serial.print(String(inputVal) + "\t");
  }
  Serial.println();
  delay(100);
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
