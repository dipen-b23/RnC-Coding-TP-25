#include <Servo.h>
float trigpin=2;
float echpin=10;
float motarpin=7;
float t;
float d;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigpin,OUTPUT);
pinMode(echpin,INPUT);
myServo.attach(motarpin);
}

void loop() {
  digitalWrite(trigpin,LOW);
  delay(10);
  t=pulseIn(echpin,HIGH);
  d=(t*0.034)/2;
  Serial.print("the distance is ");
  Serial.println(d);
  if(d<=8)
  {
    myServo.write(180);
  }
  else
  {
     myServo.write(0);
  }
}
