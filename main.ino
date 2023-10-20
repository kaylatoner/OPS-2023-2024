#define LED_PIN 7
#define POT_PIN 18
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN,OUTPUT);
  pinMode(POT_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int voltage = analogRead(POT_PIN);
  digitalWrite(LED_PIN,HIGH);
  delay(voltage*1.8+200);
  digitalWrite(LED_PIN,LOW);
  delay(voltage*1.8+200);
}
