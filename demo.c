const int TRIG_PIN = 6; // Arduino pin connected to Ultrasonic Sensor's TRIG pin
const int ECHO_PIN = 7; // Arduino pin connected to Ultrasonic Sensor's ECHO pin

const int TRIG2_PIN = 11; // Arduino pin connected to Ultrasonic Sensor's TRIG pin
const int ECHO2_PIN = 12; 

const int LED_PIN  = 2; // Arduino pin connected to LED's pin

const int MOTOR_PIN = 3; // Arduino pin connected to motor pin
const int MOTOR_PIN1 = 4;
const int MOTOR_PIN2 = 5;

const int MOTOR2_PIN = 8;
const int MOTOR2_PIN1 = 9;
const int MOTOR2_PIN2 = 10;


const int DISTANCE_THRESHOLD = 10
; // centimeters

// variables will change:
float duration_us, distance_cm,duration2_us, distance2_cm;

void setup() {
  Serial.begin (9600);       // initialize serial port
  pinMode(TRIG_PIN, OUTPUT); // set arduino pin to output mode
  pinMode(ECHO_PIN, INPUT);  // set arduino pin to input mode
 
  pinMode(TRIG2_PIN, OUTPUT); // set arduino pin to output mode
  pinMode(ECHO2_PIN, INPUT);  // set arduino pin to input mode
 
  pinMode(LED_PIN, OUTPUT); // set arduino pin to output mode
  
  pinMode(MOTOR_PIN,OUTPUT);
  pinMode(MOTOR_PIN1,OUTPUT);
  pinMode(MOTOR_PIN2,OUTPUT);
  
  pinMode(MOTOR2_PIN,OUTPUT);
  pinMode(MOTOR2_PIN1,OUTPUT);
  pinMode(MOTOR2_PIN2,OUTPUT);
}

void loop() {
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(TRIG_PIN, LOW);
   delayMicroseconds(50); 
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(100); 
  digitalWrite(TRIG_PIN, LOW);
    duration_us = pulseIn(ECHO_PIN, HIGH);

   digitalWrite(TRIG2_PIN, LOW); 
    delayMicroseconds(50); 
  digitalWrite(TRIG2_PIN, HIGH);
  delayMicroseconds(100); 
  digitalWrite(TRIG2_PIN, LOW);
    duration2_us = pulseIn(ECHO2_PIN, HIGH);

  
  digitalWrite(MOTOR_PIN, HIGH);
  digitalWrite(MOTOR_PIN1, HIGH);
  digitalWrite(MOTOR_PIN2, HIGH);

  
  digitalWrite(MOTOR2_PIN, HIGH);
  digitalWrite(MOTOR2_PIN1, HIGH);
  digitalWrite(MOTOR2_PIN2, HIGH);



  // measure duration of pulse from ECHO pin
  
  // calculate the distance
  distance_cm = 0.017 * duration_us;
  distance2_cm = 0.017 * duration2_us;


  if((distance_cm < DISTANCE_THRESHOLD)||(distance2_cm < DISTANCE_THRESHOLD))
  {
    digitalWrite(LED_PIN, HIGH); // turn on LED
    
    digitalWrite(MOTOR_PIN, LOW); //turn of motor
    digitalWrite(MOTOR_PIN1, LOW); //turn of motor
    digitalWrite(MOTOR_PIN2, LOW); //turn of motor
    
    digitalWrite(MOTOR2_PIN, LOW); //turn of motor
    digitalWrite(MOTOR2_PIN1, LOW); //turn of motor
    digitalWrite(MOTOR2_PIN2, LOW); //turn of motor
    

  }
  
  else
  {
   digitalWrite(LED_PIN, LOW);  // turn off LED
   
    digitalWrite(MOTOR_PIN, HIGH); // turn on motor
    digitalWrite(MOTOR_PIN1, HIGH); //turn of motor
    digitalWrite(MOTOR_PIN2, HIGH);//turn of motor
    
    digitalWrite(MOTOR2_PIN, HIGH); // turn on motor
    digitalWrite(MOTOR2_PIN1, HIGH); //turn of motor
    digitalWrite(MOTOR2_PIN2, HIGH);//turn of motor
    

  }
 // print the value to Serial Monitor
  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");
  
  Serial.print("distance2: ");
  Serial.print(distance2_cm);
  Serial.println(" cm");


  delay(500);
}