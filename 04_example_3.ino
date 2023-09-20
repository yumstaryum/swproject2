#define PIN_LED 13
unsigned int count;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
  count=0;
  while(!Serial)
  {
    ;
  }
  Serial.println("Hello World!");
  digitalWrite(PIN_LED, 0);
}

void loop() {
 Serial.println(++count);
 analogWrite(PIN_LED, 250);
 delay(1000);

 analogWrite(PIN_LED,LOW);
 delay(1000);
}
