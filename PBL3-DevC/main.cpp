#include "esp_camera.h"
#include <Arduino.h>
#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <iostream>
#include <sstream>

struct MOTOR_PINS
{
	// moi motor co 3 chan
  int pinEn; // chan nhan tin hieu bam xung (PWM)
  int pinIN1;
  int pinIN2;    
};

std::vector<MOTOR_PINS> motorPins = 
{
  {12, 13, 15},  //RIGHT_MOTOR Pins (EnA, IN1, IN2)
  {12, 14, 2},  //LEFT_MOTOR  Pins (EnB, IN3, IN4)
};

const char* ssid     = "abc";
const char* password = "12121212";

// ESPAsyncWebServer chua mot dau vao WebSocket de de dang xu ly ket noi WebSocket
// tao mot doi tuong WS de xu ly cac ket noi tren duong dan /WS
AsyncWebServer server(80); // khoi tao doi tuong server voi port 80 - Internet (http)
AsyncWebSocket wsCamera("/Camera"); // khoi tao doi tuong wsCamera voi diem cuoi /Camera
AsyncWebSocket wsCarInput("/CarInput"); // khoi tao doi tuong wsCarInput voi diem cuoi /CarInput
uint32_t cameraClientId = 0; // khoi tao bien cameraClientId voi kieu uint32_t(kieu int khong dau 32 bit)


void handleRoot(AsyncWebServerRequest *request) 
{
  request->send_P(200, "text/html", htmlHomePage);
}

void handleNotFound(AsyncWebServerRequest *request) 
{
    request->send(404, "text/plain", "File Not Found");
}

void setup(void) 
{
  setUpPinModes();
  Serial.begin(115200); // khoi dong Serial o muc baud rate (toc do truyen tin hieu) = 115200

  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  // vong lap kiem tra trang thai, trong khi ESP32 chua ket noi mang duoc thi ta in mot loat dau cham bieu thi su dang ket noi mang
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  // Print local IP address and start web server
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP()); // xuat dia chi IP cua WiFi
  
  // Route for root / web page
  server.on("/", HTTP_GET, handleRoot); // dinh nghia server.on() de gui thong tin theo phuong thuc GET 
  server.onNotFound(handleNotFound); // xu ly ma loi HTTP 404
  // onEvent va addHandler la 2 ham ket hop de khoi tao websocket
  // onEvent nhan dau vao la mot ham
  // phuong thuc onEvent se thuc thi khi co su kien lien quan den Camera xay ra
  wsCamera.onEvent(onCameraWebSocketEvent); 
  // cap nhat doi tuong wsCamera vao trong webserver HTTP
  server.addHandler(&wsCamera);
  
  // phuong thuc onEvent se thuc thi khi co su kien lien quan den Dau vao cua xe xay ra 
  wsCarInput.onEvent(onCarInputWebSocketEvent);
  // cap nhat doi tuong wsCarInput vao trong webserver HTTP
  server.addHandler(&wsCarInput);

  // goi phuong thuc begin() de server bat dau lang nghe request dang den
  server.begin();
  Serial.println("HTTP server started");

  // goi ham thiet lap chan cua Camera 
  setupCamera();
}


void loop() 
{	
  // De tranh lang phi tai nguyen server va gay sap server thi cleanupClients duoc goi mot cach co chu ky
  // tu ham loop()
  // cleanupClients de gioi han so clients bang cach dong ket noi cu nhat khi ma so luong clients vuot qua
  wsCamera.cleanupClients(); 
  wsCarInput.cleanupClients(); 
  // goi ham gui anh duoc chup den Client 
  sendCameraPicture(); 
  
}
