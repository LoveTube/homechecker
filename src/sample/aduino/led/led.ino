//KY016 3-color LED module
int redpin = 11; // select the pin for the red LED
int bluepin = 12; // select the pin for the blue LED
int greenpin = 13;// select the pin for the green LED
int val;
void setup () {
  pinMode (redpin, OUTPUT);
  pinMode (bluepin, OUTPUT);
  pinMode (greenpin, OUTPUT);
  Serial.begin (9600);
}
void loop ()
{
  analogWrite (11, 0);
  analogWrite (12, 0);
  analogWrite (13, 255);
  
}
