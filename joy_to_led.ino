float xValue = 0;
float yValue = 0;

int led1 = 5;
int led2 = 6;

int led3 = 9;
int led4 = 10;

int joystickX = A0;
int joystickY = A1;

void setup() {
  // put your setup code here, to run once:

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  
  pinMode(joystickX, INPUT);
  pinMode(joystickY, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  xValue = map(analogRead(joystickX), 0, 1023, -1, 1);
  yValue = map(analogRead(joystickY), 0, 1023, -1, 1);


  if(xValue > 0){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
   }
   if(xValue < 0){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
   }
   if(yValue > 0){
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
   }
   if(yValue < 0){
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
   }
   if(joystickX != 1 && joystickX != -1){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    }
    if(joystickY != 1 && joystickY != -1){
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    }

}
