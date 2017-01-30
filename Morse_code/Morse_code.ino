/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
  
  modified 8 Sep 2016
  by Colby Newman
*/

//Declare some global variabled used for Morse Code
//If you want to change the blink duration, change the value of "dot". 1000 = 1 second.
//LED indicates which digital port we are using, the Arduino Uno board has one located at port 13.
//There are digital ports of which you can connect external LEDs to.
int LED = 13;
int dot = 500;
int dash = dot *3;
int same_letter_space = dot;
int diff_letter_space = dot *3;
int word_space = dot * 7;

void displayA(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dash);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
}

void displayB(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
}

void displayC(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
}

void displayD(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayE(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayF(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayG(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayH(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayI(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayJ(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayK(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayL(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayM(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayN(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayO(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayP(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayQ(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayR(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayS(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayT(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayU(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayV(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayW(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayX(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayY(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayZ(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void display1(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void display2(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void display3(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void display4(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void display5(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void display6(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void display7(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void display8(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void display9(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
}

void display0(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayPeriod(){
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displayComma(){
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dot);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
  digitalWrite(LED, HIGH);
  delay(dash);
  digitalWrite(LED, LOW);
  delay(dot);
}

void displaySOSDenver(){
  displayS();
  delay(diff_letter_space);
  displayO();
  delay(diff_letter_space);
  displayS();
  delay(word_space);
  display3();
  delay(diff_letter_space);
  display9();
  delay(diff_letter_space);
  displayPeriod();
  delay(diff_letter_space);
  display7();
  delay(diff_letter_space);
  display3();
  delay(diff_letter_space);
  display9();
  delay(diff_letter_space);
  display2();
  delay(word_space);
  displayN();
  delay(diff_letter_space);
  displayComma();
  delay(word_space);
  display1();
  delay(diff_letter_space);
  display0();
  delay(diff_letter_space);
  display4();
  delay(diff_letter_space);
  displayPeriod();
  delay(diff_letter_space);
  display9();
  delay(diff_letter_space);
  display9();
  delay(diff_letter_space);
  display0();
  delay(diff_letter_space);
  display3();
  delay(word_space);
  displayW();
  delay(word_space); 
}

void displayInput(){
   char input[30] = "SOS 39.7392 N, 104.9903 W";
   size_t length = strlen(input);
   
   for(int i = 0; i < length; ++i){
    if(i == 'A'){
      displayA();
      delay(diff_letter_space);
    }
    if(i == 'B'){
      displayB();
      delay(diff_letter_space);
    }
    if(i == 'C'){
      displayC();
      delay(diff_letter_space);
    }
    if(i == 'D'){
      displayD();
      delay(diff_letter_space);
    }
    if(i == 'E'){
      displayE();
      delay(diff_letter_space);
    }
    if(i == 'F'){
      displayF();
      delay(diff_letter_space);
    }
    if(i == 'G'){
      displayG();
      delay(diff_letter_space);
    }
    if(i == 'H'){
      displayH();
      delay(diff_letter_space);
    }
    if(i == 'I'){
      displayI();
      delay(diff_letter_space);
    }
    if(i == 'J'){
      displayJ();
      delay(diff_letter_space);
    }
    if(i == 'K'){
      displayK();
      delay(diff_letter_space);
    }
    if(i == 'L'){
      displayL();
      delay(diff_letter_space);
    }
    if(i == 'M'){
      displayM();
      delay(diff_letter_space);
    }
    if(i == 'N'){
      displayN();
      delay(diff_letter_space);
    }
    if(i == 'O'){
      displayO();
      delay(diff_letter_space);
    }
    if(i == 'P'){
      displayP();
      delay(diff_letter_space);
    }
    if(i == 'Q'){
      displayQ();
      delay(diff_letter_space);
    }
    if(i == 'R'){
      displayR();
      delay(diff_letter_space);
    }
    if(i == 'S'){
      displayS();
      delay(diff_letter_space);
    }
    if(i == 'T'){
      displayT();
      delay(diff_letter_space);
    }
    if(i == 'U'){
      displayU();
      delay(diff_letter_space);
    }
    if(i == 'V'){
      displayV();
      delay(diff_letter_space);
    }
    if(i == 'W'){
      displayW();
      delay(diff_letter_space);
    }
    if(i == 'X'){
      displayX();
      delay(diff_letter_space);
    }
    if(i == 'Y'){
      displayA();
      delay(diff_letter_space);
    }
    if(i == 'Z'){
      displayA();
      delay(diff_letter_space);
    }
    if(i == '1'){
      display1();
      delay(diff_letter_space);
    }
    if(i == '2'){
      display2();
      delay(diff_letter_space);
    }
    if(i == '3'){
      display3();
      delay(diff_letter_space);
    }
    if(i == '4'){
      display4();
      delay(diff_letter_space);
    }
    if(i == '5'){
      display5();
      delay(diff_letter_space);
    }
    if(i == '6'){
      display6();
      delay(diff_letter_space);
    }
    if(i == '7'){
      display7();
      delay(diff_letter_space);
    }
    if(i == '8'){
      display8();
      delay(diff_letter_space);
    }
    if(i == '9'){
      display9();
      delay(diff_letter_space);
    }
    if(i == '0'){
      display0();
      delay(diff_letter_space);
    }
    if(i == ','){
      displayComma();
      delay(diff_letter_space);
    }
    if(i == '.'){
      displayPeriod();
      delay(diff_letter_space);
    }
    if(i == ' '){
      delay(word_space);
    }
   }//end of for loop

}

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  displayInput();
}
