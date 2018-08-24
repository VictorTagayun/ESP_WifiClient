/*
    This sketch sends data via HTTP GET requests to data.sparkfun.com service.

    You need to get streamId and privateKey at data.sparkfun.com and paste them
    below. Or just customize this script to talk to other HTTP servers.

*/

#include <ESP8266WiFi.h>

const char* ssid     = "SingaporeMilitia";
const char* password = "123Qweasd";

//const char* host = "data.sparkfun.com";
//const char* streamId   = "....................";
//const char* privateKey = "....................";
bool wifi_once_connected = false;

void setup() {

  int wifi_retry = 0;

  Serial.begin(115200);
  delay(10);

  // We start by connecting to a WiFi network

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  /* Explicitly set the ESP8266 to be a WiFi-client, otherwise, it by default,
     would try to act as both a client and an access-point and could cause
     network-issues with your other WiFi-devices on your WiFi-network. */
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

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

int value = 0;

void loop() {
  delay(5000);
  Serial.println(WiFi.localIP());
  
}

