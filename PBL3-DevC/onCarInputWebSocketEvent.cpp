	// Ham onCarInputWebSocketEvent thuc hien xu ly cac su kien xay ra voi InputCar
	
	// Tham so client la mot con tro tro den mot doi tuong cua lop  AsyncWebSocketClient
	// va no la doi tuong duoc su dung de gui du lieu tro ve client khi no ket noi den server
	
	// Tham so type la mot bien cua kieu AwsEventType, no chua tat ca cac su kien co the kich
	// hoat viec thuc thi ham xu ly 

void onCarInputWebSocketEvent(AsyncWebSocket *server, AsyncWebSocketClient *client, AwsEventType type,void *arg, uint8_t *data, size_t len) 
{                      
  switch (type) 
  {
    case WS_EVT_CONNECT:
      Serial.printf("WebSocket client #%u connected from %s\n", client->id(), client->remoteIP().toString().c_str());
      break;
    case WS_EVT_DISCONNECT:
      Serial.printf("WebSocket client #%u disconnected\n", client->id());
      moveCar(0);
      ledcWrite(PWMLightChannel, 0);  
      break;
    case WS_EVT_DATA: // su kien mot goi du lieu duoc nhan tu client
      AwsFrameInfo *info;
      info = (AwsFrameInfo*)arg;
      if (info->final && info->index == 0 && info->len == len && info->opcode == WS_TEXT) 
      {
        std::string myData = "";
        myData.assign((char *)data, len);
        std::istringstream ss(myData);
        std::string key, value;
        std::getline(ss, key, ',');
        std::getline(ss, value, ',');
        Serial.printf("Key [%s] Value[%s]\n", key.c_str(), value.c_str()); 
        int valueInt = atoi(value.c_str());     
        if (key == "MoveCar")
        {
          moveCar(valueInt);        
        }
        else if (key == "Speed")
        {
          ledcWrite(PWMSpeedChannel, valueInt);
        }
        else if (key == "Light")
        {
          ledcWrite(PWMLightChannel, valueInt);         
        }     
      }
      break;
    case WS_EVT_PONG: // su kien phan hoi mot ping request
    case WS_EVT_ERROR: // su kien mot loi duoc nhan tu client
      break;
    default:
      break;  
  }
}
