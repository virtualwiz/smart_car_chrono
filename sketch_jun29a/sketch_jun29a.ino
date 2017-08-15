void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(A5,INPUT);
  Serial.begin(9600);
}

void loop() {
  if (!digitalRead(A5))
  {
    digitalWrite(13,HIGH);
    delay(200);
    digitalWrite(13,LOW);
    delay(1000);
    Serial.write(0x55);
    tone(13,1800);
    delay(100);
    tone(13,1200);
    delay(100);
    noTone(13);
    digitalWrite(13,LOW);
  }
}
