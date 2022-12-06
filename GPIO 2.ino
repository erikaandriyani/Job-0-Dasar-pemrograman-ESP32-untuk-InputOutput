// set pin numbers
const int buttonPin = 4;
const int buttonPin2 = 16;
const int ledPin = 5;
const int ledPin2 = 18;
int buttonState = 0;
int buttonState2 = 0;

void setup() {
 Serial.begin(115200);
 pinMode(buttonPin, INPUT);
 pinMode(buttonPin2, INPUT);
 pinMode(ledPin, OUTPUT);
 pinMode(ledPin2, OUTPUT);
}

void loop() {
 buttonState = digitalRead(buttonPin);
 buttonState2 = digitalRead(buttonPin2);
 Serial.println(buttonState);
 Serial.println(buttonState2);
 
 if (buttonState == HIGH) {
 digitalWrite(ledPin, HIGH);
 } else {
 digitalWrite(ledPin, LOW);
 }
 
 if (buttonState2 == HIGH) {
 digitalWrite(ledPin2, HIGH);
 delay(500);
 digitalWrite(ledPin2, LOW);
 delay(500);
 } else {
 digitalWrite(ledPin2, LOW);
 }
}
