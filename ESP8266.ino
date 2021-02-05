void setup() {
  // put your setup code here, to run once:

  pinMode(BUILTIN_LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(BUILTIN_LED, HIGH);
  delay(500);
  digitalWrite(BUILTIN_LED, LOW);
  delay(500);

}
