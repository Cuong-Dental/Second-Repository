void setUpPinModes()
{
  // Set up kenh PWM
  ledcSetup(PWMSpeedChannel, PWMFreq, PWMResolution); // ledcSetup = led Control set up (dinh cau hinh chuc nang cho PWM)
  ledcSetup(PWMLightChannel, PWMFreq, PWMResolution);
      
  for (int i = 0; i < motorPins.size(); i++) // motorPins.size() = kich thuc cua vector motorPins = 2
  {
	// dat che do OUTPUT cho cac chan
    pinMode(motorPins[i].pinEn, OUTPUT);    
    pinMode(motorPins[i].pinIN1, OUTPUT);
    pinMode(motorPins[i].pinIN2, OUTPUT);  

    /* xuat PWM ra chan (Pin) */
    ledcAttachPin(motorPins[i].pinEn, PWMSpeedChannel);
  }
  // cai dat cho xe dung o thoi diem upload
  moveCar(STOP);

  // dat che do OUTPUT cho chan dieu khien den
  pinMode(LIGHT_PIN, OUTPUT); 
  // xuat PWM ra chan   
  ledcAttachPin(LIGHT_PIN, PWMLightChannel);
}
