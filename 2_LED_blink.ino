int led1 = 3;  // Change these two according to you.
int led2 = 4;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  delay(1000);
  digitalWrite(led1, 1);
  delay(100);
  digitalWrite(led2, 1);
  delay(1000);
  digitalWrite(led1, 0);
  delay(100);
  digitalWrite(led2, 0);
}
