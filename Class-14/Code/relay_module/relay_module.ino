int relay_1 = 4;
int relay_2 = 5;
int relay_3 = 6;
int relay_4 = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(relay_1, OUTPUT);
  pinMode(relay_2, OUTPUT);
  pinMode(relay_3, OUTPUT);
  pinMode(relay_4, OUTPUT);

}

void loop() {

  digitalWrite(relay_1, LOW);
  digitalWrite(relay_3, LOW);
  digitalWrite(relay_2, HIGH);
  digitalWrite(relay_4, HIGH);

  Serial.println("Relay 1 & 3 on");

  delay(1000);

  digitalWrite(relay_1, HIGH);
  digitalWrite(relay_3, HIGH);
  digitalWrite(relay_2, LOW);
  digitalWrite(relay_4, LOW);

  Serial.println("Relay 2 & 4 on");

  delay(1000);
}