#include <iostream>
using namespace std;

int main() {
  int ships[4][4] = {
    {1,0,0,1},
    {0,0,0,0},
    {0,1,0,0},
    {0,0,0,0},
  };
  
  int hits = 0;
  int numOfTurns = 0;


  while(hits < 3){
    int col, row;
    
    cout << "Choose row :\n";
    cin >> row;
    cout << "Choose col :\n";
    cin >> col;
    
    if(ships[row][col]){
      cout << "Hit *******************\n";
      hits+=1;
    }else {
      cout << "You missed !!!!!!!!!!!!!!!!\n";
    }
    
    numOfTurns+=1;
  }
  
  cout << "Yeaahh, you win\n";
  cout << "You win with " << numOfTurns << " attempts";

  return 0;
}
