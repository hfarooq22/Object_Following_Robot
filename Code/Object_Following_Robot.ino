//sensor pins
#define trig_pin A0 //analog input 0
#define echo_pin A1 //analog input 1

//our L298N control pins
const int LForward = 6;
const int LBackward = 7;
const int RForward = 4;
const int RBackward = 5;

//other variables
long duration, distance;

void setup() 
{
  //setting motors and pins as output/input devices
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode (LForward, OUTPUT);
  pinMode (LBackward, OUTPUT);
  pinMode (RForward, OUTPUT);
  pinMode (RBackward, OUTPUT);
}

void loop()
{     
  //calibration
  digitalWrite(trig_pin, LOW);
  delay(2);
  digitalWrite(trig_pin, HIGH);
  delay(10);
  digitalWrite(trig_pin, LOW);  

  //calculating distance
  duration = pulseIn(echo_pin, HIGH);
  distance = (duration * (0.034 / 2));   //distance = (time * speed) / 2

  //forward
  if(distance>15 && distance<40)
    {
      digitalWrite(LForward, HIGH); 
      digitalWrite(LBackward, LOW); 
      digitalWrite(RForward, HIGH); 
      digitalWrite(RBackward, LOW);
      delay(500);
    }

  //stop
  else
    {
      digitalWrite(LForward, LOW); 
      digitalWrite(LBackward, LOW); 
      digitalWrite(RForward, LOW); 
      digitalWrite(RBackward, LOW);
      delay(300);
    }  
  delay(0);
}
