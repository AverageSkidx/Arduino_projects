int led1 = 3; // Change these according to you.
int led2 = 4;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  randomSeed(analogRead(0));
}

void loop() {
  int randomLED = random(1, 3); 

  if (randomLED == 1) {
    digitalWrite(led1, 1);
  } else {
    digitalWrite(led2, 1);
  }
  delay(750);

  randomLED = random(1, 3); 

  if (randomLED == 1) {
    digitalWrite(led1, 0);
  } else {
    digitalWrite(led2, 0);
  }
  delay(750);
}
