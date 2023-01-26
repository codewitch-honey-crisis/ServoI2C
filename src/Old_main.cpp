/*
#include <Arduino.h>
// include Wire library for I2C
#include <Wire.h>

// include Adafruit PCA9685 Servo library
#include <Adafruit_PWMServoDriver.h>

//Create object to represent PCA9685 at default I2C address
Adafruit_PWMServoDriver pca9685 = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver pca96852 = Adafruit_PWMServoDriver(0x41);


// Define maximum and minimum number of "ticks" for the servo motors
// Range from 0 to 4095
// This determines the pulse width

#define SERVOMIN 90 // Minimum value
#define SERVOMAX 500 // Maximum value

// Define servo motor connections (expand as required)
#define SER0 0   // Servo Motor 0 on connector 1
#define SER2  1  // My Servo motor on connector 2
#define SER3  2  // My Servo motor on connector 3


#define SER12 12  // Servo motor 12 on connector 12
#define SER13 13  // Servo motor 13 on connector 13
#define SER14 14  // Servo motor 14 on connector 14

// Variables for Servo Motor positions (expand as required)
int pwm0;
int pwm1;

int pwm2;

long previousMillis = 0;
long interval = 10000;


void setup() {
  // put your setup code here, to run once:
  // Serial monitor setup
  Serial.begin(115200);
  
  // Print to monitor
  Serial.println("PCA9685 Servo Test");

  // Initialise PCA9685
  pca9685.begin();
  pca96852.begin();

  //set PWM Frequency to 50Hz
  pca9685.setPWMFreq(50);
  pca96852.setPWMFreq(50);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Move motor 0 from 0 to 180 degrees
 
  for (int posDegrees = 0; posDegrees <= 180; posDegrees++ ){

    // Determine PWM pulse width
    pwm0 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
    pwm2 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
    // Write to PCA9685
    pca9685.setPWM(SER0, 0, pwm0);
    pca9685.setPWM(SER2, 0, pwm2);
    pca96852.setPWM(SER0, 0, pwm2);

    // Print to serial monitor
    //Serial.print("Motor 1 =  ");
    //Serial.println(posDegrees);
    delay(10);
  }

  for (int posDegrees = 180; posDegrees >= 0; posDegrees-- ){

    // Determine PWM pulse width
    pwm0 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
    pwm2 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
    // Write to PCA9685
    pca9685.setPWM(SER0, 0, pwm0);
    pca9685.setPWM(SER2, 0, pwm2);
    pca96852.setPWM(SER0, 0, pwm2);

    // Print to serial monitor
    Serial.print("Motor 1 =  ");
    Serial.println(posDegrees);
    delay(10);
  }

  
  for (int posDegrees = 0; posDegrees <= 180; posDegrees++ ){

    // Determine PWM pulse width
    pwm0 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
    pwm2 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
    // Write to PCA9685
    pca9685.setPWM(SER12, 0, pwm0);
    pca9685.setPWM(SER13, 0, pwm2);
    // Print to serial monitor
    Serial.print("Motor 1 =  ");
    Serial.println(posDegrees);
    delay(100);
  }

  for (int posDegrees = 180; posDegrees >= 0; posDegrees-- ){

    // Determine PWM pulse width
    pwm0 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
    pwm2 = map(posDegrees*2, 0, 180, SERVOMIN, SERVOMAX);
    // Write to PCA9685
    pca9685.setPWM(SER12, 0, pwm0);
    pca9685.setPWM(SER13, 0, pwm2);
    // Print to serial monitor
    Serial.print("Motor 1 =  ");
    Serial.println(posDegrees);
    delay(100);
  }

  
  for (int posDegrees = 0; posDegrees <= 180; posDegrees++ ){

    // Determine PWM pulse width
    pwm0 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
    pwm2 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
    // Write to PCA9685
    pca9685.setPWM(SER3, 0, pwm0);
    
    // Print to serial monitor
    Serial.print("Left motor 3 =  ");
    Serial.println(pwm0);
    delay(10);
  }

  for (int posDegrees = 180; posDegrees >= 0; posDegrees-- ){

    // Determine PWM pulse width
    //pwm0 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
    pwm2 = map(posDegrees, 0, 180, SERVOMIN, SERVOMAX);
    // Write to PCA9685
    
    pca9685.setPWM(SER3, 0, pwm2);
    // Print to serial monitor
    Serial.print("Left Motor 3 =  ");
    Serial.println(pwm2);
    delay(10);
  }
  //pca9685.setPWM(SER12, 0, (SERVOMAX-SERVOMIN)/2);

}
*/
