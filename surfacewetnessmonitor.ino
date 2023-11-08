//Initializes the wetness index and the percentage of wetness
int Wetness = 0;
int percentage=0;

//Initiates the serial communication between arduino and the sensor with baud rate 9600
void setup() 
{
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
//Obtains the analog reading from the sensor
Wetness= analogRead(A0);
//Converts the raw data into a percentage form based on the range of data obtained
percentage = map(Wetness, 100, 1200, 100, 0);
//Displays the wetness index to verify the functioning
Serial.println(percentage);
//Compares with threshold and displays if the pump is on/off and turns on/off the pump
if(percentage < 60)  
{
  Serial.println(" pump on");
  digitalWrite(3,LOW);
}
if(percentage >80)
{
  Serial.println("pump off");
  digitalWrite(3,HIGH);
}
}
