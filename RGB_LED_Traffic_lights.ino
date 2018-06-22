int green = 3; 
int red = 5;
int yellow = 4;
int button = 2;
int GG = 6;
int GR = 7;
int buzzer = 13;
//time
bool isLedOn = true;


void setup() {
  // put your setup code here, to run once:
pinMode(green, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(red, OUTPUT);
pinMode(button, INPUT);
pinMode(GG, OUTPUT);
pinMode(GR, OUTPUT);


}

void loop() {
//GREEN ON ALWAYS
if (isLedOn == true) {
   {
  digitalWrite(green,HIGH);
  digitalWrite(GR,HIGH); 

  }
}


if(digitalRead(button)) {
  digitalWrite(green,LOW);
  digitalWrite(GR,LOW);
  digitalWrite(yellow,HIGH);
  tone(buzzer,200,50);
  delay(900);
  tone(buzzer,200,50);
  delay(900);
  tone(buzzer,200,50);
  delay(900);
  tone(buzzer,200,50);
  delay(900);
  
  digitalWrite(yellow,LOW);
  //RED HIGH
  digitalWrite(red,HIGH);
  digitalWrite(GG,HIGH);
  tone(buzzer,200,50);
  delay(300);
  tone(buzzer,200,50);
  delay(300);
  tone(buzzer,200,50);
  delay(300);
  tone(buzzer,200,50);
  delay(300);
  tone(buzzer,200,50);
  delay(300);
  tone(buzzer,200,50);
  delay(300);
  tone(buzzer,200,50);
  delay(300);
  tone(buzzer,200,50);
  delay(300);
  tone(buzzer,200,50);
  delay(300);
  //RUN FAST NOOOOOW!!!
  digitalWrite(red,LOW);
  digitalWrite(GG,LOW);
  tone(buzzer,200,50);
  delay(300);
  digitalWrite(red,HIGH);
  digitalWrite(GG,HIGH);
  tone(buzzer,200,50);
  delay(300);
  digitalWrite(red,LOW);
  digitalWrite(GG,LOW);
  tone(buzzer,200,50);
  delay(300);
  digitalWrite(red,HIGH);
  digitalWrite(GG,HIGH);
  tone(buzzer,200,50);
  delay(300);
  
  
  digitalWrite(red,LOW);
  //YELLOW
  digitalWrite(yellow,HIGH);
  digitalWrite(GG,LOW);
  tone(buzzer,200,50);
  delay(900);
  digitalWrite(GG,HIGH);
  tone(buzzer,200,50);
  delay(900);
  digitalWrite(GG,LOW);
  tone(buzzer,200,50);
  delay(900);
  digitalWrite(GG,HIGH);
  tone(buzzer,200,50);
  delay(900);
  //back to GREEN AND RED
  digitalWrite(yellow,LOW);
  digitalWrite(GG,LOW);
   }
}

