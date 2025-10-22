#include <Servo.h>

#define LEDVERMELHO 3
#define LEDVERDE 2
#define TRIG 10
#define ECHO 7
#define PINSERVO 9

Servo motor;

void setup() {
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  motor.attach(PINSERVO);
  Serial.begin(9600);
  motor.write(100); 
  digitalWrite(LEDVERMELHO,HIGH); 
}

void loop() {
  float resultado = detectaObjeto(TRIG, ECHO);
  Serial.print("Distancia: ");
  Serial.println(resultado);

  if(resultado < 10.0 && resultado > 0){
    abreCancela();
  }

  delay(200);
}

float detectaObjeto(int trigPin, int echoPin){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duracao = pulseIn(ECHO, HIGH, 30000);
  if(duracao == 0) return -1;
  float distancia = (duracao / 2.0) / 29.1; 
  return distancia;
}

void abreCancela(){
  motor.write(0);      
  digitalWrite(LEDVERMELHO, LOW);
  digitalWrite(LEDVERDE,HIGH);
  delay(3000);           
  motor.write(100);      
  digitalWrite(LEDVERDE,LOW);
  digitalWrite(LEDVERMELHO,HIGH);
}
