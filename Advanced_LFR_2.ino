// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

void setup() {
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(26, ledChannel);
  ledcAttachPin(25, ledChannel);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(27, OUTPUT);

  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(14, HIGH);
  digitalWrite(27, LOW);

  ledcWrite(ledChannel, 150);
  ledcWrite(ledChannel, 150);
}

void loop() {
  // put your main code here, to run repeatedly:

}
