//Define all pins and name them
#define enA 6
#define in1A 7
#define in2A 8
#define enB 9
#define in1B 10
#define in2B 11

void setup() {
  // set the pin modes as outputs (signals output from Arduino to breadboard)
  pinMode(enA, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1B, OUTPUT);
  pinMode(in2B, OUTPUT);

  // enable motor A by setting enableA high permanently and enable motor b to read analog 
  digitalWrite(enB, HIGH);
}

void loop() {

  //Uses motor A to move forward for 3650ms at a slow pace
  analogWrite(enA,75); //enables motor A to speed 75 to move towards the target line slowly
  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);
  digitalWrite(in1B, LOW);
  digitalWrite(in2B, LOW);
  delay(3650);

  //stops all motors for 1000ms
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);
  digitalWrite(in1B, LOW);
  digitalWrite(in2B, LOW);
  delay(1000);

  //spins motor B for 1000ms to launch pingpong ball
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);
  digitalWrite(in1B, HIGH);
  digitalWrite(in2B, LOW);
  delay(500);

  //stops all motors for 1000ms
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);
  digitalWrite(in1B, LOW);
  digitalWrite(in2B, LOW);
  delay(1000);

  //Uses motor A to move back towards starting line for 2500ms at full speed
  analogWrite(enA,255); //enables motor A to max speed
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, HIGH);
  digitalWrite(in1B, LOW);
  digitalWrite(in2B, LOW);
  delay(2500);
}