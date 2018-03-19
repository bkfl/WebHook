// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

#define DHT_PIN D0
#define DHT_TYPE DHT22

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
    dht.begin();
}

void loop() {
    String temp = String(dht.getTempCelcius());
    Particle.publish("temp", temp, PRIVATE);
    delay(30000);
}
