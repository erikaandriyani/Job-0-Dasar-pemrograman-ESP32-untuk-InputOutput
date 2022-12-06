const int analogInPin = 34; 
const int analogOutPin = 5; 
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;
int sensorValue = 0; 
int outputValue = 0;

void setup() {
 Serial.begin(115200);
 ledcSetup(ledChannel, freq, resolution);
 ledcAttachPin(analogOutPin, ledChannel);
}
void loop() {
 sensorValue = analogRead(analogInPin);
 outputValue = map(sensorValue, 0, 4095, 0, 255);
 ledcWrite(ledChannel, outputValue);
 Serial.print("sensor = ");
 Serial.print(sensorValue);
 Serial.print("\t output = ");
 Serial.println(outputValue);
 delay(500);
}
