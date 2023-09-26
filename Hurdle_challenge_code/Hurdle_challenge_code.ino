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

  // enable motor A and B by setting enableA high permanently
  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
}

void loop() {

  //Uses motor A to move forward for 3560ms at full speed
  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);
  digitalWrite(in1B, LOW);
  digitalWrite(in2B, LOW);
  delay(3650);

  //stops all motors for 550ms
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);
  digitalWrite(in1B, LOW);
  digitalWrite(in2B, LOW);
  delay(550);

  //Uses motor A to move back towards starting line for 4500ms at full speed
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, HIGH);
  digitalWrite(in1B, LOW);
  digitalWrite(in2B, LOW);
  delay(4500);

  //stops all motors for 1000ms
  digitalWrite(in1A, LOW);
  digitalWrite(in2A, LOW);
  digitalWrite(in1B, LOW);
  digitalWrite(in2B, LOW);
  delay(1000);

}