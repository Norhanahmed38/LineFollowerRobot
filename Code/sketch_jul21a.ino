#include <AFMotor.h>

int lefts = 4 ;
int rights = 3 ;

AF_DCMotor m1(4, MOTOR12_8KHZ);  
AF_DCMotor m2(3, MOTOR12_8KHZ);

void setup() {

  m1.setSpeed(200);
  m2.setSpeed(200);

  pinMode(lefts,INPUT);
  pinMode(rights,INPUT);
  Serial.begin(9600);
  
}
void stop(){

    m1.run(RELEASE);
    m2.run(RELEASE);
}
void Turn_Left(){
  
    m1.run(RELEASE);
    m2.run(FORWARD);
     
}
void Turn_Right(){

    m1.run(FORWARD);
    m2.run(RELEASE);
}
void Move(){
  
    m1.run(FORWARD);
    m2.run(FORWARD);
   
}

void loop(){

  if(lefts==HIGH && rights==LOW){
    stop();
  }

  else if(lefts==HIGH  && rights==LOW){
   Turn_Left();
    
  }

  else if(lefts==LOW && rights==HIGH){
  Turn_Right();  
  }

else if (lefts==LOW && rights==LOW){
  Move();
  }
  
}
