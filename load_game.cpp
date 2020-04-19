#include<iostream>
#include<fstream>
#include<string>
#include "load_game.h"
using namespace std;

void load_game(string *Pname, int *Phealth, int *Phitp, string *ChapNum){
  string *FileName1 = new string("");
  string *FileName2 = new string("");
  string *FName = new string("");
  while(true){
    cout<<"Enter Player Name and Chapter (with space) to load game."<<endl;
    cin>>*FileName1>>*FileName2;
    *FName = "Saved_Games/" + (*FileName1) + (*FileName2) + ".txt";
    ifstream fin((*FName).c_str());
    if(fin.fail()){
      cout<<"Enter in correct format"<<endl;
    }
    else{
      cout<<"Load successful."<<endl;
      *ChapNum = *FileName2;
      fin>>*Pname>>*Phealth>>*Phitp;
      break;
    }
  }
  cout<<"Player Name: "<<*Pname<<endl;
  cout<<"Player Health: "<<*Phealth<<endl;
  cout<<"Player Hit Points: "<<*Phitp<<endl;
  delete FileName1;
  FileName1 = 0;
  delete FileName2;
  FileName2 = 0;
  delete FName;
  FName = 0;
  return;
}

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
}
