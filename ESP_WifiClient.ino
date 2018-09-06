#include <ESP8266WiFi.h>

const char* ssid     = "SingaporeMilitia";
const char* password = "123Qweasd";

void setup() {

  Serial.begin(115200);
  delay(10);
  pinMode(LED_BUILTIN, OUTPUT);

  // We start by connecting to a WiFi network
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  //  while (wifi_retry <= 20) {
  //    if (WiFi.status() == WL_CONNECTED) {
  //      wifi_once_connected = true;
  //      wifi_retry = 20;
  //    }
  //    delay(500);
  //    Serial.print("wifi_retry : ");
  //    Serial.println(wifi_retry);
  //    wifi_retry++;
  //  }

}

void loop() {
  delay(5000);

  if (WiFi.status() == WL_CONNECTED) {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("No Wifi!");
    digitalWrite(LED_BUILTIN, LOW);
  }

}

