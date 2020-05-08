#include<iostream>
#include<fstream>
#include<string>
#include "load_game.h"
using namespace std;

void load_game(string *Pname, int *Phealth, int *Phitp, int *Psol, string *ChapNum){//This function loads the game status stored before using save_game() function with the help of File I/O
  string *FileName1 = new string("");
  string *FileName2 = new string("");
  string *FName = new string("");
  while(true){
    cout<<"Enter Player Name and Chapter (with space) to load game."<<endl;//Files are stored as txt files with name as player name followed by the Chapter number
    cin>>*FileName1>>*FileName2;
    *FName = "Saved_Games/" + (*FileName1) + (*FileName2) + ".txt";
    ifstream fin((*FName).c_str());
    if(fin.fail()){
      cout<<"Enter in correct format, or, Enter correct Player Name and Chapter Number from above."<<endl;
    }
    else{
      cout<<"Load successful."<<endl;
      *ChapNum = *FileName2;
      fin>>*Pname>>*Phitp>>*Phealth>>*Psol;
      fin.close();
      break;
    }
  }
  cout<<"Player Name: "<<*Pname<<endl;//inputting game status from the file
  cout<<"Player Health: "<<*Phealth<<endl;
  cout<<"Player Hit Points: "<<*Phitp<<endl;
  cout<<"Player Soldiers: "<<*Psol<<endl;
  delete FileName1;
  FileName1 = 0;
  delete FileName2;
  FileName2 = 0;
  delete FName;
  FName = 0;
  return;
}
/*
int main(){
  string *PN = new string("");
  int *PHE = new int(0);
  int *PHI = new int(0);
  string *CHAP = new string("");
  load_game(PN, PHE, PHI, CHAP);
  delete PN;
  PN = 0;
  delete PHE;
  PHE = 0;
  delete PHI;
  PHI = 0;
  delete CHAP;
  CHAP = 0;
}*/
