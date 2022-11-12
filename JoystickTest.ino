#define Xaxis_pin A0 //VRx Pin
#define Yaxis_pin A1 //VRy Pin
#define SW_pin A2 //SW Pin

void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

void loop() {
  Serial.print("X-axis: ");
  Serial.print(analogRead(Xaxis_pin));
  Serial.print(" : ");
  Serial.print("Y-axis: ");
  Serial.print(analogRead(Yaxis_pin));
  Serial.print(" : ");
  Serial.print("Switch:  ");
  Serial.println(digitalRead(SW_pin));
  delay(200);
}
