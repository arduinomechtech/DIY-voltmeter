 // One pin is treated as a voltage **reference point**, and the other as the **measurement point**.
 // The difference in voltage between them gives the **potential difference across a component**.
 int analogPin1 = A0; // Reference voltage input
 int analogPin2 = A1; // Measurement voltage input
 int analogValue1; // Raw analog reading from reference point (A0)
 int analogValue2; // Raw analog reading from measurement point (A1)
 float voltage1;
 float voltage2;
 void setup() {
 // Calculated voltage at reference point
 // Calculated voltage at measurement point
 pinMode(analogPin1, INPUT);
 pinMode(analogPin2, INPUT);
 Serial.begin(9600); // Initialize serial communication at 9600 bps
 }
 void loop() {
 // Read analog values (0–1023)
 analogValue1 = analogRead(analogPin1);
 analogValue2 = analogRead(analogPin2);
 // Convert analog readings to voltages (0V–5V)
 voltage1 = (5.0 / 1023.0) * analogValue1;
 voltage2 = (5.0 / 1023.0) * analogValue2;
 // Calculate and print the absolute potential difference (across the component)
 Serial.println(abs(voltage2- voltage1));
 delay(500); // Wait half a second before the next reading
 }
