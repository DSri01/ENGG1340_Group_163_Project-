#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include "Chap1.h"
#include "Chap2.h"
#include "Chap3.h"
#include "load_game.h"
#include "save_game.h"
#include "Fortune_cookie.h"
using namespace std;

void load(string *Pna, int *Phit, int *Pheal, int *Sol, string *ChapNum){
  ifstream fin("Saved_Games/Saved_Games_num.txt");
  int *SavedNum = new int(0);
  fin>>*SavedNum;
  fin.close();
  if(*SavedNum > 0){
    cout<<"Available games to load: (Player name followed by Chapter number)"<<endl;
    string *f = new string("");
    ifstream fi("Saved_Games/Saved_Games.txt");
    for(int i = 0; i <= *SavedNum; i++){
      getline(fi,*f);
      cout<<*f<<endl;
    }
    delete f;
    f = 0;
    fi.close();
    char *C = new char(' ');
    cout<<"Do you want to load a game?\nEnter 'Y' for yes or 'N' for no."<<endl;
    while(true){
      cin>>*C;
      if(*C == 'Y'){
        load_game(Pna, Pheal, Phit, Sol, ChapNum);
      	break;
      }
      else if(*C == 'N'){
        break;
      }
      else{
        cout<<"Enter a valid value."<<endl;
      }
    }
  }
  delete SavedNum;
  SavedNum = 0;
}

void save(string *Pna, int *Pheal, int *Phit, int *Psol, string *ChapNum){
  cout<<"Do you want to save the game?\nEnter 'Y' for yes or any other character for no.\n";
  char *c = new char('a');
  cin>>*c;
  if(*c == 'Y'){
    ifstream fin("Saved_Games/Saved_Games_num.txt");
    int *SavedNum = new int(0);
    fin>>*SavedNum;
    fin.close();
    save_game(Pna, Pheal, Phit, Psol, ChapNum);
    ofstream fout("Saved_Games/Saved_Games_num.txt");
    fout<<(*SavedNum + 1);
    fout.close();
    delete SavedNum;
    SavedNum = 0;
  }
  delete c;
  c = 0;
}

int main(){
  string *Pname = new string("");
  string *ChapNum = new string("0");
  int *Phitp = new int(2);
  int *Phealth = new int(5);
  int *ChoiceInChap1 = new int(0);
  int *Psol = new int(0);
  char *yes_no = new char('A');
  cout<< "##  ##      ##"<<endl<<"##  ##      ##"<<endl<<"##  ##  ##  ##"<<endl<<"##  ##  ##  ##"<<endl<<"######      ##"<<endl<<"##  ##  ##  ##"<<endl<<"##  ##  ##    "<<endl<<"##  ##  ##  ##"<<endl<<"##  ##  ##  ##"<<endl;
  cout<< "~~ Welcome to THE CONQUEST!~~"<<endl<< "Before We Begin Would You Like To Have A Fortune Cookie?"<<endl<< "Enter 'Y' for yes and any other letter for no"<<endl;
  cin >> *yes_no;
  if (*yes_no == 'Y'){
    Fortune_cookie();
  }
  cout <<"Well then, Lets begin our game"<<endl;
  delete yes_no;
  yes_no = 0;
  load(Pname, Phitp, Phealth, Psol, ChapNum) ;
  if(*ChapNum == "0"){
    cout<<"Enter your name. Please do not add any special character, numbers or 'space' character in your name."<<endl;
    while(true){
      cin>>*Pname;
      string Pnamecpy = *Pname;
      int *Plength = new int(Pnamecpy.length());
      int *countl = new int(0);
      char *c = new char(' ');
      for(int i = 0; i < *Plength; i++){
        *c = Pnamecpy[i];
        if(isalpha(*c)){
          *countl = *countl + 1;
        }
      }
      if(*countl == *Plength){
        delete Plength;
        Plength = 0;
        delete countl;
        countl = 0;
        delete c;
        c = 0;
        break;
      }
      else{
        cout<<"Enter in correct format."<<endl;
      }
    }
    *ChapNum = "1";
    save(Pname, Phitp , Phealth, Psol, ChapNum);
  }
  if(*ChapNum == "1"){
    cout<<"\nChapter 1: THE FARMLANDS.\n\n";
    Chap1(Pname, Phitp, Phealth, Psol, ChoiceInChap1);
    *ChapNum = "2";
  }
  if(*ChapNum == "2"){
    cout<<"\nChapter 2: THE ENCHANTED FOREST.\n\n";
    Chap2(Pname, Phitp, Phealth, Psol, ChoiceInChap1);
    *ChapNum = "3";
    save(Pname, Phitp, Phealth, Psol, ChapNum);
  }
  if(*ChapNum == "3"){
    cout<<"\nChapter 3: THE RIVER.\n\n";
    Chap3(Pname, Phitp, Phealth, Psol);
    *ChapNum = "3";
    save(Pname, Phitp, Phealth, Psol, ChapNum);
  }
//  cout<<*Pname<<" "<<*Phitp<<" "<<*Phealth<<" "<<*Psol<<" "<<*ChoiceInChap1<<endl;
}
