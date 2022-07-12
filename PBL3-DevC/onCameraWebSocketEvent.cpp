	// Ham onCameraWebSocketEvent thuc hien xu ly cac su kien xay ra voi Camera
	
	// Tham so client la mot con tro tro den mot doi tuong cua lop  AsyncWebSocketClient
	// va no la doi tuong duoc su dung de gui du lieu tro ve client khi no ket noi den server
	
	// Tham so type la mot bien cua kieu AwsEventType, no chua tat ca cac su kien co the kich
	// hoat viec thuc thi ham xu ly 
void onCameraWebSocketEvent(AsyncWebSocket *server, AsyncWebSocketClient *client, AwsEventType type, void *arg, uint8_t *data, size_t len) 
{                      
  switch (type) 
  {
    case WS_EVT_CONNECT: // su kien ket noi
      Serial.printf("WebSocket client #%u connected from %s\n", client->id(), client->remoteIP().toString().c_str());
      cameraClientId = client->id();
      break;
    case WS_EVT_DISCONNECT: // su kien ngat ket noi
      Serial.printf("WebSocket client #%u disconnected\n", client->id());
      cameraClientId = 0;
      break;
    case WS_EVT_DATA: // su kien mot goi du lieu duoc nhan tu client
      break;
    case WS_EVT_PONG: // su kien phan hoi mot ping request
    case WS_EVT_ERROR: // su kien mot loi duoc nhan tu client
      break;
    default:
      break;  
  }
}
