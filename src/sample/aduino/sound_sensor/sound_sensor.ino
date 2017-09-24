void setup()

{

  Serial.begin(57600); // open serial, set baud rate to 9600 bps

}

void loop()
{

      int val;

      val=analogRead(0);   // 아날로그 핀 번호에 맞게 수정
      
     
      Serial.println(val,DEC); //print sound value to Serial 
      
          
      delay(500);

}
