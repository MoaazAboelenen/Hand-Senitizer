
int trigPin = 5;
int echoPin = 6;
int RMA = 2;
int RMB = 3;
long duration, dist, average;
long aver[3];   //array for average


void setup() {
  Serial.begin(9600);
  pinMode (RMA, OUTPUT);
  pinMode(RMB, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}


void measure() {
   digitalWrite(10,HIGH);
  
   digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(15);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);

    
  duration = pulseIn(echoPin, HIGH);
  dist = (duration / 2) / 29.1; 
}
 
void loop(){
  for (int i = 0; i <= 2; i++) { //average distance
    measure();
    aver[i] = dist;
             //delay between measurements
  }
  dist = (aver[0] + aver[1] + aver[2]) / 3;

  if ( dist < 50 ) {
    //Change distance as per your need
    digitalWrite(RMA, HIGH);
    digitalWrite(RMB, LOW);
    Serial.println("The distance is more than 60");
  }
  
  
 else
 {
  digitalWrite(RMA,LOW);
  digitalWrite(RMB,LOW);
}
}


  
