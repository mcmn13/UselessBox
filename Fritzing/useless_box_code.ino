
// Useless Box v1.0
//
// Kai Laborenz 2017
//
// original by BARRAGAN <http://barraganstudio.com>
// This example code is in the public domain.

// include library to operate servos
#include <Servo.h>

// const and variables definitions
const int  buttonPin = 2;
int buttonState = 0;

Servo myservo;        // create servo object to control a servo
                      // a maximum of eight servo objects can be created
int pos;              // variable to store the servo position
long timeDelay;       // variable to store random delay times for servo operation
int counter = 0;        // counter for counting the switch uses
int counterSwitch = 0;

void setup()
{
  pinMode(buttonPin, INPUT);
  myservo.attach(9);    // attaches servo on pin 9 to the servo object

  Serial.begin(9600); // initialize serial communication at 9600 bits per second:
  
}

void loop()
{
  timeDelay = 0;
  buttonState = digitalRead(buttonPin);  


       if (buttonState == HIGH) {  // not switched
                                  
         if (counterSwitch == 0) {                      
           counter = counter + 1;    // advance counter
           counterSwitch = 1;    
           Serial.println(counter);
           }
      
         for(pos = myservo.read(); pos >=20; pos -= 1) {                                     
           myservo.write(pos);     
           }
        }
        else {                    // switched
        
          // if (counter % 2 == 0) { timeDelay = 50; } // every second round goes slower
          
          for(pos = myservo.read(); pos <=90; pos += 1) {                    
            myservo.write(pos);                 
            delay(timeDelay);   
            }
            counterSwitch = 0;
        }
        
}                                 // end main loop

