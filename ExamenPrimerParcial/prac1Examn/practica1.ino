const int sensorPin = A0; // Pin que conectado el TMP36

void setup() {
    Serial.begin(9600); // inicia la comunicación serial
}

void loop() {
    // lee el valor analogo del sensor (0-1023)
    int sensorValue = analogRead(sensorPin);

    // convuerte el valor analogo a voltaje (0-5V)
    float voltage = sensorValue * (5.0 / 1023.0);

    // convierte el voltaje a grados centígrados 
    //(formula para TMP36)
    float temperatureC = (voltage - 0.5) * 100.0;

    // muestra la temperatura en el monitor serial
    Serial.print("Temperatura: ");
    Serial.print(temperatureC);
    Serial.println(" C");

	//aqui espera 1 sec antes de la lectura qu esigue
    delay(1000);
}