int Wetness = 0;

int percentage=0;

void setup() {

  pinMode(3,OUTPUT);

  Serial.begin(9600);

}

void loop() {

Wetness= analogRead(A0);

percentage = map(Wetness, 100, 1200, 100, 0);

Serial.println(percentage);

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
