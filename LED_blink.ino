int led = 3; // Change this according to you.

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  delay(1000);
  digitalWrite(led, 1);
  delay(1000);
  digitalWrite(led, 0);
}
