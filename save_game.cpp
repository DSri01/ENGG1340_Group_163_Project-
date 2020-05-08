#include<iostream>
#include<string>
#include<fstream>
#include "save_game.h"
using namespace std;

void save_game(string *Pname, int *Phealth, int *Phitp, int *Psol, string *ChapNum){//this functions saves the game status in Saved_Games directory by using file I/O
  string *FName = new string("");
  *FName = "Saved_Games/" + (*Pname) + (*ChapNum) + ".txt";//The game status of the player is stored in a file named as the player name followed by the chapter number
  ofstream fout(((*FName).c_str()));
  fout<<*Pname<<" "<<*Phealth<<" "<<*Phitp<<" "<<*Psol;
  cout<<"Game Saved."<<endl;
  fout.close();
  ifstream fin("Saved_Games/Saved_Games.txt");
  string *x = new string("");
  int *count = new int(-1);
  while(fin>>*x){
    if((*x) == ((*Pname) + (*ChapNum))){
      *count = 1;
      break;
    }
  }
  fin.close();
  if((*count) == -1){
    ofstream fout2("Saved_Games/Saved_Games.txt", ios::app);
    fout2<<(*Pname)<<(*ChapNum)<<endl;
    fout2.close();
  }
  delete count;
  count = 0;
  delete x;
  x = 0;
  delete FName;
  FName = 0;
}
/*
int main(){
  string *Pna = new string("A");
  int *phe = new int(10);
  int *phi = new int(1);
  string *ChaNum = new string("1");
  save_game(Pna, phe, phi, ChaNum);
  delete Pna;
  Pna = 0;
  delete phe;
  phe = 0;
  delete phi;
  phi = 0;
  delete ChaNum;
  ChaNum = 0;
}*/
