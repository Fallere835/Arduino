int LEDverde=2;
int LEDamarilla=3;
int LEDroja=4;

void setup() {
  pinMode(LEDverde, OUTPUT);
  pinMode(LEDamarilla, OUTPUT);
  pinMode(Ledroja, OUTPUT);
}

void loop() {
  digitalWrite(LEDverde, HIGH);
  delay(2000);
  digitalWrite(LEDverde, LOW);

}
