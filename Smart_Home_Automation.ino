#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

#define RELAY 2

WebServer server(80);

void handleRoot() {
  String page = "<h1>Smart Home Control</h1>";
  page += "<p><a href=\"/on\"><button>ON</button></a></p>";
  page += "<p><a href=\"/off\"><button>OFF</button></a></p>";
  server.send(200, "text/html", page);
}

void handleOn() {
  digitalWrite(RELAY, HIGH);
  server.send(200, "text/html", "<h1>Device ON</h1><a href='/'>Back</a>");
}

void handleOff() {
  digitalWrite(RELAY, LOW);
  server.send(200, "text/html", "<h1>Device OFF</h1><a href='/'>Back</a>");
}

void setup() {
  pinMode(RELAY, OUTPUT);
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  Serial.print("Connecting");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.on("/on", handleOn);
  server.on("/off", handleOff);

  server.begin();
}

void loop() {
  server.handleClient();
}
