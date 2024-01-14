// hello world
/*안녕
  세계*/

void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(9,OUTPUT);
}

viod loop() {
  int btn_H = digitalRead(2);
  int btn_L = digitalRead(3);

  if(btn_H == HIGH) {
    analogWrite(9,255);
  }

  else if (btn_L == HIGH) {
    analodgWrite(9,127);
  }

  else{
    digitalWrite(9,0);
  }
}
