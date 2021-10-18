//including & intializing pin, libraries
#include "DHT.h"
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include "index.h"
#define LED D2
#define LED D3
#define DHTTYPE DHT11   // DHT 11
 
// Initialize DHT sensor.
const char* ssid = "Obtaining ip adress";
const char* password = "Balaji@900";
ESP8266WebServer server(80);

//Dht sensor pin
uint8_t DHTPin = D1;

//dht sensor intializing
DHT dht(DHTPin, DHTTYPE);                

float Temperature;
float Humidity;

void handleRoot() 
{
 String s = webpage;
 server.send(200, "text/html", s); //Used to send the STRING
}

//controlling led
void led_control() 
{
 String state = "OFF";
 String act_state = server.arg("state");
 if(act_state == "1")
 {
  digitalWrite(LED,HIGH); //LED ON
  state = "ON";
 }
 else
 {
  digitalWrite(LED,LOW); //LED OFF
  state = "OFF";
 }
 
 server.send(200, "text/plane", state);  //Used to send the STRING
}

//wifi setup
void setup(void)
{
  Serial.begin(115200);
  delay(100);
  WiFi.begin(ssid, password);
  Serial.println("");
  pinMode(LED,OUTPUT); 
  pinMode(DHTPin, INPUT);
  
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print("Connecting...");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

 //when a client requests URL with index
  server.on("/", handleRoot);
  server.on("/led_set", led_control);
  server.on("/adcread", sensor_data);
  
  server.begin();
}
/////////////////
void loop(void)
{
  server.handleClient();
}

//sensor data
void sensor_data() 
{
 Temperature = dht.readTemperature();
 Humidity = dht.readHumidity();
 String data = "{\"Temperature\":\""+ String(Temperature) +"\",\"Humidity\":\""+ String(Humidity) +"\"}";
 Serial.println(Humidity);
 server.send(200, "text/plane", data);  //Used to send the STRING

}


////////////////
//String processor(const String& var){
//  //Serial.println(var);
//  if(var == "TEMPERATURE"){
//    return readDHTTemperature();
//  }
//  else if(var == "HUMIDITY"){
//    return readDHTHumidity();
//  }
//  return String();
//}
//
