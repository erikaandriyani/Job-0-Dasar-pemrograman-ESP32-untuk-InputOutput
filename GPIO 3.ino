// set pin numbers
const int buttonPin = 4;
const int buttonPin2 = 16;
const int buttonPin3 = 17;
const int ledPin = 5;
const int ledPin2 = 18;
const int ledPin3 = 19;
const int ledPin4 = 21;
const int ledPin5 = 3;
int buttonState = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
 Serial.begin(115200);
 pinMode(buttonPin, INPUT);
 pinMode(buttonPin2, INPUT);
 pinMode(buttonPin3, INPUT);
 pinMode(ledPin, OUTPUT);
 pinMode(ledPin2, OUTPUT);
 pinMode(ledPin3, OUTPUT);
 pinMode(ledPin4, OUTPUT);
 pinMode(ledPin5, OUTPUT);
}

void loop() {
 buttonState = digitalRead(buttonPin);
 buttonState2 = digitalRead(buttonPin2);
 buttonState3 = digitalRead(buttonPin3);
 Serial.println(buttonState);
 Serial.println(buttonState2);
 Serial.println(buttonState3);
 
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
 
 if (buttonState3 == HIGH) {
 digitalWrite(ledPin5, LOW);
 digitalWrite(ledPin3, HIGH);
 delay(100);
 digitalWrite(ledPin3, LOW);
 digitalWrite(ledPin4, HIGH);
 delay(100);
 digitalWrite(ledPin4, LOW);
 digitalWrite(ledPin5, HIGH);
 delay(100);
 } else {
 digitalWrite(ledPin3, LOW);
 digitalWrite(ledPin4, LOW);
 digitalWrite(ledPin5, LOW);
 }
}
