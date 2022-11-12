const int trigPin = 9;
const int echoPin = 10;
const int pinBuzzer = 3;

long duration;
int distance;
float soundDistance = 2; //distancia del sensor ultsonic para encender buzzer
int buzzDelay = 1; //aumente el int para cambiar el tono del buzzer(grave a agudo)

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pinBuzzer, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  //enviar señal del sensor ultrasonico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034/2;

  if(distance <= soundDistance)
  {
    //encender buzzer
    digitalWrite(pinBuzzer, HIGH);
    delayMicroseconds(buzzDelay);
     digitalWrite(pinBuzzer, LOW);
    delayMicroseconds(buzzDelay);
  }
  else
  {
    //apagar buzzer
    digitalWrite(pinBuzzer, LOW);
  }

  //mostrar datos en monitor serial
  Serial.print("Distance: ");
  Serial.println(distance);
}
