int ldrPin = A0;      // LDR connected to analog pin A0
int ldrValue = 0;     // Variable to store reading

void setup() {
  Serial.begin(9600);  // Start serial monitor
}

void loop() {
  // Read LDR value (0 = dark, 1023 = very bright)
  ldrValue = analogRead(ldrPin);
  
  // Print value to serial monitor
  Serial.println(ldrValue);
    delay(500);  // Wait half a second between readings
}
