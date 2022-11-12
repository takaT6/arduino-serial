int analogPin=A3;
double aval=0;
double val=0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    aval = analogRead(analogPin);
    val = 5 * aval / 1024;
    Serial.println(val);
    delay(100);
}
