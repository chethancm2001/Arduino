int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int tim = 200;
int high = HIGH;
int low = LOW;

void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
}

void loop() {
  digitalWrite(led1,LOW);
  delay(tim);
  digitalWrite(led1,HIGH);
  delay(tim);
   digitalWrite(led2,LOW);
 delay(tim);
  digitalWrite(led2,HIGH);
 delay(tim);
   digitalWrite(led3,LOW);
  delay(tim);
  digitalWrite(led3,HIGH);
 delay(tim);
   digitalWrite(led4,LOW);
 delay(tim);
  digitalWrite(led4,HIGH);
  delay(tim);
  
}
