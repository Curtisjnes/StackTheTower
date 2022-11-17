#define col0 2
#define row4 3
#define row2 4
#define col3 5
#define row7 6
#define col1 7
#define row1 8
#define row0 9
#define col2 10
#define col5 11
#define row3 12
#define col7 13
#define row5 A2
#define row6 A3
#define col6 A4 
#define col4 A5

boolean field[][] = {}
int row[] = {row0, row1, row2, row3, row4, row5, row6, row7};
int column[] = {col0, col1, col3, col4, col5, col6, col7};

void setup() {

  for(int i = 0; i<=7; i++){
    pinMode(row[i], OUTPUT);
  }
  for(int i = 0; i<=7; i++){
    pinMode(column[i], OUTPUT);
  }
  clearDisplay();
}

void clearDisplay(){
   for(int i = 0; i<=7; i++){
      digitalWrite(row[i],HIGH); 
  }
  for(int i = 0; i<=7; i++){
    digitalWrite(column[i], LOW);
  } 
}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(9, LOW);

  delay(500);

  digitalWrite(9, HIGH);
  digitalWrite(2, LOW);

  digitalWrite(5, HIGH);
  digitalWrite(12, LOW);

  delay(500);

  digitalWrite(12, HIGH);
  digitalWrite(5, LOW);
}

void TrackPlacement(){

}

void switchLED(int r, int c, bool ON){
  if(ON){
    digitalWrite(r, HIGH);
    digitalWrite(c, LOW);
  }
  else{
    digitalWrite(r, LOW);
    digitalWrite(c, HIGH);
  }
}
