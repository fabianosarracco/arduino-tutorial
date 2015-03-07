void setup() {
  // initialize the digital pins as output.
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH); // set the LED1 on
  digitalWrite(9, LOW); // set the LED2 off
  delay(1000); // wait for a second
  digitalWrite(8, LOW); // set the LED1 off
  digitalWrite(9, HIGH); // set the LED2 on
  delay(1000); // wait for a second
}
