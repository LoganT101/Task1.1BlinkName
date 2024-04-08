
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  blinkName();
  delay(3000);
  
}

void blinkName() {
  // L
  blinkDot();
  blinkDash();
  blinkDot();
  blinkDot();
  delay(1500); 
  
  // O
  blinkDash();
  blinkDash();
  blinkDash();
  delay(1500); 
  
  // G
  blinkDash();
  blinkDash();
  blinkDot();
  delay(1500); 
  
  // A
  blinkDot();
  blinkDash();
  delay(1500); 
  
  // N
  blinkDash();
  blinkDot();
}
  
void blinkDot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void blinkDash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
