void setup() {
  Serial.begin(9600);
//  pinMode(doPin, OUTPUT);
}

void loop() {
  int time = millis();
  Serial.print(time/1000);
  Serial.println(" seconds have elapsed");
  delay(1000);
}
