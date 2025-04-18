#include<LiquidCrystal.h>

	LiquidCrystal lcd(12,11,5,4,3,2);
	const int sensor=A0; 
	float tempc; 
	float tempf;
	float vout; 

void setup()
  
	{
	pinMode(sensor,INPUT); // Configuring pin A0 as input
	Serial.begin(9600);
	lcd.begin(16,2);
	delay(500);
}

void loop()
  
	{
	vout=analogRead(sensor);
	vout=(vout*500)/1023;
	tempc=vout; // Storing value in Degree Celsius
	tempf=(vout*1.8)+32; // Converting to Fahrenheit
	lcd.setCursor(0,0);
	lcd.print("in DegreeC= ");
	lcd.print(tempc);
	lcd.setCursor(0,1);
	lcd.print("in Fahrenheit=");
	lcd.print(tempf);
	delay(1000); //Delay of 1 second for ease of viewing in serial monitor
}
