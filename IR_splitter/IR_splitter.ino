/*
IR splitter
*/


const int inputPin = 2;     // the number of the input pin
const int IR1 =  3;      // the number of the output pin
const int IR2 =  4;      // the number of the output pin
const int IR3 =  5;      // the number of the output pin
const int IR4 =  6;      // the number of the output pin
const int IR5 =  7;      // the number of the output pin
const int IR6 =  8;      // the number of the output pin
const int IR7 =  9;      // the number of the output pin
const int IR8 =  10;      // the number of the output pin



// variables will change:
int input = 0;         // variable for reading the input signal


void setup() {
  
  pinMode(IR1, OUTPUT);
   pinMode(IR2, OUTPUT);
    pinMode(IR3, OUTPUT);
     pinMode(IR4, OUTPUT);
      pinMode(IR5, OUTPUT);
       pinMode(IR6, OUTPUT);
        pinMode(IR7, OUTPUT);
         pinMode(IR8, OUTPUT);
  
  pinMode(inputPin, INPUT);
  
 Serial.begin(9600);
}

void loop() {

 
  
  input = digitalRead(inputPin);

if (input == 1)
{

   digitalWrite(IR1, HIGH);
   digitalWrite(IR2, HIGH);
   digitalWrite(IR3, HIGH);
   digitalWrite(IR4, HIGH);
   digitalWrite(IR5, HIGH);
   digitalWrite(IR6, HIGH);
   digitalWrite(IR7, HIGH);
   digitalWrite(IR8, HIGH);
}



if (input == 0)
{

   digitalWrite(IR1, LOW);
   digitalWrite(IR2, LOW);
   digitalWrite(IR3, LOW);
   digitalWrite(IR4, LOW);
   digitalWrite(IR5, LOW);
   digitalWrite(IR6, LOW);
   digitalWrite(IR7, LOW);
   digitalWrite(IR8, LOW);
}



 
}
