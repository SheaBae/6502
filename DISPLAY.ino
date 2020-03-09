//
// +----------------------------------------+
// | +------------------------------------+ |
// | | 65C02 LED decoder logic by SheaBae | |
// | +------------------------------------+ |
// +----------------------------------------+
//
// This program effectivily turns an ATMEGA328P
// into an LED alphaNum segment display decoder.
// Thus eliminating the need from like 100 74-series
// logic.
//
// Version 0.1 - Jan 2020
//

void setup() {

pinMode(0, OUTPUT);   //1
pinMode(1, OUTPUT);   //2
pinMode(2, OUTPUT);   //3
pinMode(3, OUTPUT);   //4
pinMode(4, OUTPUT);   //5
pinMode(5, OUTPUT);   //6
pinMode(6, OUTPUT);   //7
pinMode(7, OUTPUT);   //8
pinMode(8, OUTPUT);   //9
pinMode(9, OUTPUT);   //10
pinMode(10, OUTPUT);  //11
pinMode(11, OUTPUT);  //12
pinMode(12, OUTPUT);  //13
pinMode(13, OUTPUT);  //14
pinMode(A0, INPUT);   //PORTA-0
pinMode(A1, INPUT);   //PORTA-1
pinMode(A2, INPUT);   //PORTA-2
pinMode(A3, INPUT);   //PORTA-3
pinMode(A4, INPUT);   //PORTA-4
pinMode(A5, INPUT);   //PORTA-5

}

void loop() {
 
//0
if digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 0 && digitalRead(A5) == 0) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//1
if (digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 1 && digitalRead(A3) == 0 && digitalRead(A4) == 1 && digitalRead(A5) == 1) { 
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//2
if (digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 1 && digitalRead(A3) == 1 && digitalRead(A4) == 0 && digitalRead(A5) == 0) { 
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//3
if (digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 1 && digitalRead(A3) == 1 && digitalRead(A4) == 0 && digitalRead(A5) == 1) { 
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//4
if (digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 1 && digitalRead(A3) == 1 && digitalRead(A4) == 1 && digitalRead(A5) == 0) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//5
if (digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 1 && digitalRead(A3) == 1 && digitalRead(A4) == 1 && digitalRead(A5) == 1) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//6
if (digitalRead(A0) == 1 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 0 && digitalRead(A5) == 0) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//7
if (digitalRead(A0) == 1 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 0 && digitalRead(A5) == 1) { 
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//8
if (digitalRead(A0) == 1 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 1 && digitalRead(A5) == 0) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//9
if (digitalRead(A0) == 1 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 1 && digitalRead(A5) == 1) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//A
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 0 && digitalRead(A5) == 1) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//B
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 1 && digitalRead(A5) == 0) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//C
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 1 && digitalRead(A5) == 1) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//D
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 1 && digitalRead(A4) == 0 && digitalRead(A5) == 0) { 
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//E
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 1 && digitalRead(A4) == 0 && digitalRead(A5) == 1) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//F
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 1 && digitalRead(A4) == 1 && digitalRead(A5) == 0) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//G
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 0 && digitalRead(A3) == 1 && digitalRead(A4) == 1 && digitalRead(A5) == 1) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//H
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 1 && digitalRead(A3) == 0 && digitalRead(A4) == 0 && digitalRead(A5) == 0) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//I
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 1 && digitalRead(A3) == 0 && digitalRead(A4) == 0 && digitalRead(A5) == 1) { 
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//J
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 1 && digitalRead(A3) == 0 && digitalRead(A4) == 1 && digitalRead(A5) == 0) { 
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//K
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 1 && digitalRead(A3) == 0 && digitalRead(A4) == 1 && digitalRead(A5) == 1) { 
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 1);
  digitalWrite(10, 1);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//L
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 1 && digitalRead(A3) == 1 && digitalRead(A4) == 0 && digitalRead(A5) == 0) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//M
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 1 && digitalRead(A3) == 1 && digitalRead(A4) == 0 && digitalRead(A5) == 1) { 
  digitalWrite(0, 1);
  digitalWrite(1, 1);
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//N
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 1 && digitalRead(A3) == 1 && digitalRead(A4) == 1 && digitalRead(A5) == 0) { 
  digitalWrite(0, 1);
  digitalWrite(1, 1);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 1);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//O
if (digitalRead(A0) == 0 && digitalRead(A1) == 0 && digitalRead(A2) == 1 && digitalRead(A3) == 1 && digitalRead(A4) == 1 && digitalRead(A5) == 1) { 
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//P
if (digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 0 && digitalRead(A5) == 0) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//Q
if (digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 0 && digitalRead(A5) == 1) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//R
if (digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 1 && digitalRead(A5) == 0) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//S
if (digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 0 && digitalRead(A3) == 0 && digitalRead(A4) == 1 && digitalRead(A5) == 1) { 
  digitalWrite(0, 0);
  digitalWrite(1, 1);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 1);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//T
if digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 0 && digitalRead(A3) == 1 && digitalRead(A4) == 0 && digitalRead(A5) == 0) { 
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 1);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//U
if digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 0 && digitalRead(A3) == 1 && digitalRead(A4) == 0 && digitalRead(A5) == 1) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//V
if digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 0 && digitalRead(A3) == 1 && digitalRead(A4) == 1 && digitalRead(A5) == 0) { 
  digitalWrite(0, 0);
  digitalWrite(1, 1);
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//W
if digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 0 && digitalRead(A3) == 1 && digitalRead(A4) == 1 && digitalRead(A5) == 1) { 
  digitalWrite(0, 1);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 1);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 1);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//X
if digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 1 && digitalRead(A3) == 0 && digitalRead(A4) == 0 && digitalRead(A5) == 0) { 
  digitalWrite(0, 0);
  digitalWrite(1, 1);
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
  digitalWrite(9, 0);
  digitalWrite(10, 1);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//Y
if digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 1 && digitalRead(A3) == 0 && digitalRead(A4) == 0 && digitalRead(A5) == 1) { 
  digitalWrite(0, 0);
  digitalWrite(1, 1);
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 1);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}
//Z
if digitalRead(A0) == 0 && digitalRead(A1) == 1 && digitalRead(A2) == 1 && digitalRead(A3) == 0 && digitalRead(A4) == 1 && digitalRead(A5) == 0) { 
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 1);
  digitalWrite(13, 0);
} else {
  digitalWrite(0, 0);
  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
}

//END


}

