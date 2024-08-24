const int buttonPin1 = 10; // Button 1 connected to pin 10
const int buttonPin2 = 11; // Button 2 connected to pin 11
const int red1 = 2;
const int yellow1 = 3; // Yellow light for lane 1
const int green1 = 4;
const int red2 = 5;
const int yellow2 = 6; // Yellow light for lane 2
const int green2 = 7;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT_PULLUP); // Enable internal pull-up resistor for button 1
  pinMode(buttonPin2, INPUT_PULLUP); // Enable internal pull-up resistor for button 2
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
}

void loop() {

  int buttonState1 = digitalRead(buttonPin1); // Read state of button 1
  int buttonState2 = digitalRead(buttonPin2); // Read state of button 2
  // Lane 1: Red, Lane 2: Green
  digitalWrite(red1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, HIGH);
  for(int i=0;i<9;i++)
  {
  delay(1000);
  // Check if button 1 is pressed
    int buttonState1 = digitalRead(buttonPin1); // Read state of button 1
  int buttonState2 = digitalRead(buttonPin2); // Read state of button 2
  if (buttonState1 == LOW) {
    Serial.println("Button 1 pressed");
    // Add logic here to handle button 1 press
    digitalWrite(red2, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(green2, HIGH);
    digitalWrite(red1, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(green1, LOW);
    delay(2000);
  }

  // Check if button 2 is pressed
  if (buttonState2 == LOW) {
    Serial.println("Button 2 pressed");
    // Add logic here to handle button 2 press
    digitalWrite(red1, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(green1, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(green2, LOW);
    delay(2000);
  }
  }


  // Lane 1: Yellow, Lane 2: Green
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(green1, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, HIGH);
  // delay(10000); // 1 second delay for yellow

  for(int i=0;i<2;i++)
  {
  delay(1000);
  // Check if button 1 is pressed
    int buttonState1 = digitalRead(buttonPin1); // Read state of button 1
  int buttonState2 = digitalRead(buttonPin2); // Read state of button 2
  if (buttonState1 == LOW) {
    Serial.println("Button 1 pressed");
    // Add logic here to handle button 1 press
    digitalWrite(red2, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(green2, HIGH);
    digitalWrite(red1, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(green1, LOW);
    delay(2000);
  }

  // Check if button 2 is pressed
  if (buttonState2 == LOW) {
    Serial.println("Button 2 pressed");
    // Add logic here to handle button 2 press
    digitalWrite(red1, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(green1, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(green2, LOW);
    delay(2000);
  }
  }


  // Lane 1: Green, Lane 2: Red
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(green1, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);
  // delay(10000); // 1 second delay for green

 for(int i=0;i<9;i++)
  {
  delay(1000);
    int buttonState1 = digitalRead(buttonPin1); // Read state of button 1
  int buttonState2 = digitalRead(buttonPin2); // Read state of button 2
  // Check if button 1 is pressed
  if (buttonState1 == LOW) {
    Serial.println("Button 1 pressed");
    // Add logic here to handle button 1 press
    digitalWrite(red2, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(green2, HIGH);
    digitalWrite(red1, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(green1, LOW);
    delay(2000);
  }

  // Check if button 2 is pressed
  if (buttonState2 == LOW) {
    Serial.println("Button 2 pressed");
    // Add logic here to handle button 2 press
    digitalWrite(red1, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(green1, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(green2, LOW);
    delay(2000);
  }
  }


  // Lane 1: Green, Lane 2: Yellow
  digitalWrite(red1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(green1, HIGH);
  digitalWrite(red2, LOW);
  digitalWrite(yellow2, HIGH);
  digitalWrite(green2, LOW);
  // delay(10000); // 1 second delay for yellow

  for(int i=0;i<2;i++)
  {
  delay(1000);
    int buttonState1 = digitalRead(buttonPin1); // Read state of button 1
  int buttonState2 = digitalRead(buttonPin2); // Read state of button 2
  // Check if button 1 is pressed
  if (buttonState1 == LOW) {
    Serial.println("Button 1 pressed");
    // Add logic here to handle button 1 press
    digitalWrite(red2, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(green2, HIGH);
    digitalWrite(red1, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(green1, LOW);
    delay(2000);
  }

  // Check if button 2 is pressed
  if (buttonState2 == LOW) {
    Serial.println("Button 2 pressed");
    // Add logic here to handle button 2 press
    digitalWrite(red1, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(green1, HIGH);
    digitalWrite(red2, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(green2, LOW);
    delay(2000);
  }
  }

}
