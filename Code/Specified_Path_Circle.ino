//L298N Control Pins
const int LForward = 6;
const int LBackward = 7;
const int RForward = 4;
const int RBackward = 5;

void setup(){
  //Sets Motors As Output Devices
  pinMode(RForward, OUTPUT);
  pinMode(LForward, OUTPUT);
  pinMode(LBackward, OUTPUT);
  pinMode(RBackward, OUTPUT);
  delay(4000);
  
}

void loop()
{
  /////////Circle Function/////////

  digitalWrite(LForward, HIGH);
  digitalWrite(RForward, HIGH);
  digitalWrite(LBackward, LOW);
  digitalWrite(RBackward, LOW);
  delay(300);
  digitalWrite(LForward, HIGH);
  digitalWrite(RBackward, LOW);
  digitalWrite(LBackward, LOW);
  digitalWrite(RForward, LOW);
  delay(300);
  
}
