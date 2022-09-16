#pragma once

// Robot's BT name
#define ROBOT_NAME "RSK_03"

#define KICK_PIN 33

// Wheels gear reduction ratio
#define REDUCTION_RATIO  150

// Cycles per revolution [cycles/turn]
// The minus sign is here because encoder increments in reverted order with respect to pwm
#define WHEELS_CPR   -(7*4*REDUCTION_RATIO)

// Window size for speed estimation (since we are servoing at 1Khz; this can be considered as the amount of
// milliseconds used for finite differences speed estimation)
#define SPEED_WINDOW 5

// Wheels orientations [deg]
// In chassis frame, the front axis is the x axis running through the kicker of the robot
// Those are orientation of (positive PWM) driving direction of the wheels (direct angle from chassis x to the
// vector)
#define WHEEL1_ALPHA    -90
#define WHEEL2_ALPHA    30
#define WHEEL3_ALPHA    150

// Sign (if inversion of the motors is needed)
#define MOTORS_SIGN 1

// This define uses BRAKE mode to drive the motors
#define MOTORS_BRAKE

// Wheel radius [m]
#define MODEL_WHEEL_RADIUS    0.035

// Distance from robot center to wheel [m]
#define MODEL_ROBOT_RADIUS    0.0595

// Maximum wheels speed [rad/s]
#define MAX_WHEEL_SPEEDS 8

// Motors wiring pins (PWM for the two directions and A/B encoders)
#define MOTOR1_PWM1    13
#define MOTOR1_PWM2    14
#define MOTOR1_ENC1    25
#define MOTOR1_ENC2    26

#define MOTOR2_PWM1    17
#define MOTOR2_PWM2    18
#define MOTOR2_ENC1    19
#define MOTOR2_ENC2    21

#define MOTOR3_PWM1    22
#define MOTOR3_PWM2    23
#define MOTOR3_ENC1    4
#define MOTOR3_ENC2    16

// LEDs pin (6 RGB addressable WS2812 LEDs)
#define LEDS  27

// Buzzer pin
#define BUZZER 32

// Input voltage sampling pin
#define VOLTAGE 34

// Voltage divider resistors (Kohms)
#define VOLTAGE_R1  20
#define VOLTAGE_R2  10

// Maximum kick duration (microseconds)
#define KICK_MAX_DURATION 10000

// Below this voltage, the robot won't start moving, between USB voltage (see below) and this voltage,
// the robot will enter alarm mode
#define VOLTAGE_MIN 6.4

// Below this voltage, the robot is considered operated with USB
#define VOLTAGE_USB 5.0
