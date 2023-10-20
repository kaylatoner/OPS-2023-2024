#define LED_PIN 7
#define POT_PIN 18
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN,OUTPUT); // sets led pin as an output
  pinMode(POT_PIN, INPUT); // sets poteniometer pin as an input
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int voltage = analogRead(POT_PIN); // read in voltage from analog pin 18
  digitalWrite(LED_PIN,HIGH); // set led on pin 7 to high
  delay(voltage*1.8+200); // delays w led off based on value of voltage [200 , 2041.4]
  digitalWrite(LED_PIN,LOW); // set led on pin 7 to low
  delay(voltage*1.8+200); // delays w led on based on value of voltage [200 , 2041.4]
}
