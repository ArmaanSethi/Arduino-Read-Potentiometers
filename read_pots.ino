// give it a name:
static const int N = 7;
int time = 1000;
int myPotPins[] = {0, 1, 2, 3, 4, 5, 6};   // select the input pin for the potentiometer
int vals[N] = {0};       // variable to store the value coming from the sensor
void setup() {
  Serial.begin(9600);
  // initialize the digital pin as an output.
  for(int i = 0; i < N; i++)
    pinMode(myPotPins[i],OUTPUT);
    pinMode(LED_BUILTIN, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  for(int i = 0; i < N; i++){
    vals[i] = analogRead(myPotPins[i]);
    Serial.print(vals[i]);      
    Serial.print(" ");
  }
  if(vals[0] < 10)
  {
    digitalWrite(LED_BUILTIN, LOW); 
  }else
  {
    digitalWrite(LED_BUILTIN, HIGH); 
  }
  Serial.println();
}
