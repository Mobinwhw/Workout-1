int ledpinred = 5;
int ledpinyellow = 3;
 int ledpingreen = 4;
void setup() {
  // put your setup code here, to run once:
 pinMode(ledpinred,OUTPUT);
 pinMode(ledpinyellow,OUTPUT);
 pinMode(ledpingreen,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledpingreen,HIGH);
digitalWrite(ledpinyellow,LOW);
digitalWrite(ledpinred,LOW);
delay(3000);
digitalWrite(ledpinyellow,HIGH);
digitalWrite(ledpingreen,LOW);
digitalWrite(ledpinred,LOW);
delay(1000);
digitalWrite(ledpinred,HIGH);
digitalWrite(ledpinyellow,LOW);
digitalWrite(ledpingreen,LOW);
delay(2000);
}
