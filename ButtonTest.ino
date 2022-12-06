#define row0 A4
#define row1 A3
#define row2 A1
#define row3 3
#define row4 A0
#define row5 4
#define row6 5
#define row7 A2
#define col0 13
#define col1 12
#define col2 10
#define col3 11
#define col4 6
#define col5 9
#define col6 7
#define col7 8
#define placeBtn A5
#define resetBtn 2

int row[] = {row0, row1, row2, row3, row4, row5, row6, row7};
int column[] = {col0, col1, col3, col4, col5, col6, col7};

class Stage {
  private:
  bool board[8][8];
  
  public:
  
  void startStage() {
    
  }
  
  bool walk() {

  }

 bool isGameLost() {
 
  }
  
};

Stage stageOne;

void setup() {
  
  Serial.begin(9600);       // debug
  stageOne.startStage();

}

void loop() {
  
  stageOne.walk();

}