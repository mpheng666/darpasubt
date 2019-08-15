// Platform and wheel dimensions.
#define PLATFORM_LENGTH 0.3 // Wheel pivot point to wheel pivot point.
#define PLATFORM_BREADTH 0.4 // Wheel pivot point to wheel pivot point.
#define WHEEL_RADIUS 0.08
#define WHEEL_PIVOT_DIST 0.05 // Distance between wheel-ground contact point and pivot point.

// Servos and motor limits.
#define SERVO_OUTER_LIMIT 20.0
#define SERVO_INNER_LIMIT 45.0
#define SERVO_A_UPPER_LIMIT 180.0 - SERVO_OUTER_LIMIT // Minimum degree position for outer rotation.
#define SERVO_A_LOWER_LIMIT SERVO_INNER_LIMIT // Maximum degree position for inner rotation. 
#define SERVO_B_UPPER_LIMIT 180.0 - SERVO_INNER_LIMIT // Minimum degree position for outer rotation.
#define SERVO_B_LOWER_LIMIT SERVO_OUTER_LIMIT // Minimum degree position for outer rotation.
#define SERVO_C_UPPER_LIMIT 180.0 - SERVO_INNER_LIMIT // Maximum degree position for inner rotation. 
#define SERVO_C_LOWER_LIMIT SERVO_OUTER_LIMIT // Maximum degree position for inner rotation. 
#define SERVO_D_UPPER_LIMIT 180.0 - SERVO_OUTER_LIMIT // Maximum degree position for inner rotation. 
#define SERVO_D_LOWER_LIMIT SERVO_INNER_LIMIT // Maximum degree position for inner rotation. 
#define MOTOR_SPEED_LIMIT 40000 // In degress per second of the encoder.