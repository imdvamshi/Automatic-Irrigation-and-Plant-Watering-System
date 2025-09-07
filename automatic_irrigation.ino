// Define pins
const int moistureSensorPin = A0; // Soil moisture sensor
const int relayPin = 7; // Relay module

// Set moisture threshold
const int moistureThreshold = 300; // Adjust as needed

void setup() {
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Pump off initially
}

void loop() {
  int moistureLevel = analogRead(moistureSensorPin);
  Serial.print("Moisture Level: ");
  Serial.println(moistureLevel);

  if (moistureLevel < moistureThreshold) {
    digitalWrite(relayPin, HIGH); // Pump on
    Serial.println("Watering plants...");
  } else {
    digitalWrite(relayPin, LOW); // Pump off
    Serial.println("Soil is moist enough.");
  }
  
  delay(300000); // 5 minutes delay
}
