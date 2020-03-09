//
// +--------------------------------+
// | +----------------------------+ |
// | | 65C02 LED Logic by SheaBae | |
// | +----------------------------+ | 
// +--------------------------------+
//
// This program enables an LED segment
// when the CPU microcode instructs it to
// do so. Thus allowing messages to be
// displayed with the help of the speed
// of the clock to give the illusion that
// all segments are enabled at once.
//
// Version 0.1 - Jan 2020
// 

void setup() {

pinMode(2, INPUT);     //PORTA-6
pinMode(3, INPUT);     //PORTA-7
pinMode(4, INPUT);     //PORTB-0
pinMode(5, OUTPUT);    //SEGMENT-1
pinMode(6, OUTPUT);    //SEGMENT-2
pinMode(7, OUTPUT);    //SEGMENT-3
pinMode(8, OUTPUT);    //SEGMENT-4
pinMode(9, OUTPUT);    //SEGMENT-5
pinMode(10, OUTPUT);   //SEGMENT-6

}

void loop() {

if (digitalRead(2) == 0 && digitalRead(3) == 0 && digitalRead(4) == 0) {

  digitalWrite(5, 1);    
  digitalWrite(6, 1);    
  digitalWrite(7, 1);    
  digitalWrite(8, 1);   
  digitalWrite(9, 1);   
  digitalWrite(10, 1);  

}

if (digitalRead(2) == 0 && digitalRead(3) == 0 && digitalRead(4) == 1) { 

  digitalWrite(5, 0);

} 

else {

  digitalWrite(5, 1);}


if (digitalRead(2) == 0 && digitalRead(3) == 1 && digitalRead(4) == 0) { 

  digitalWrite(6, 0);

}

else {

 digitalWrite(6, 1);

}

if (digitalRead(2) == 0 && digitalRead(3) == 1 && digitalRead(4) == 1) { 

  digitalWrite(7, 0);

}

else {

  digitalWrite(7, 1);

}

if (digitalRead(2) == 1 && digitalRead(3) == 0 && digitalRead(4) == 0) { 

  digitalWrite(8, 0);

}

else {

  digitalWrite(8, 1);

}

if (digitalRead(2) == 1 && digitalRead(3) == 0 && digitalRead(4) == 1) { 

  digitalWrite(9, 0);

} 

else {

  digitalWrite(9, 1);

}

if (digitalRead(2) == 1 && digitalRead(3) == 1 && digitalRead(4) == 0) {   

  digitalWrite(10, 0);

} 

else {

  digitalWrite(10, 1);

}

}
