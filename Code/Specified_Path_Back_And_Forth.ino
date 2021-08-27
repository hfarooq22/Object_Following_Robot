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
  delay(5000);

/////////Forward and Back Function/////////

  //Goes Forward
  digitalWrite(LForward, HIGH);
  digitalWrite(RForward, HIGH);
  digitalWrite(LBackward, LOW);
  digitalWrite(RBackward, LOW);
  delay(1800);

  //Stops
  digitalWrite(RForward, LOW);
  digitalWrite(LForward, LOW);
  digitalWrite(RBackward, LOW);
  digitalWrite(LBackward, LOW);

  //Sharp Right Turn
  digitalWrite(LForward, HIGH);
  digitalWrite(RBackward, HIGH);
  digitalWrite(LBackward, LOW);
  digitalWrite(RForward, LOW);
  delay(950);
  digitalWrite(LForward, HIGH);
  digitalWrite(RForward, HIGH);
  digitalWrite(LBackward, LOW);
  digitalWrite(RBackward, LOW);

  //Stops
  digitalWrite(RForward, LOW);
  digitalWrite(LForward, LOW);
  digitalWrite(RBackward, LOW);
  digitalWrite(LBackward, LOW);
  
  //Goes Forward
  digitalWrite(LForward, HIGH);
  digitalWrite(RForward, HIGH);
  digitalWrite(LBackward, LOW);
  digitalWrite(RBackward, LOW);
  delay(1800);

  //Stops
  digitalWrite(RForward, LOW);
  digitalWrite(LForward, LOW);
  digitalWrite(RBackward, LOW);
  digitalWrite(LBackward, LOW);
  
}

void loop()
{
}
