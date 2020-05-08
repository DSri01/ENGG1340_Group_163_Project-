#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include "Delete_game.h"
using namespace std;

void Delete_game(){
  ifstream fin("Saved_Games/Saved_Games_num.txt");
  int *SavedNum = new int(0);
  fin>>*SavedNum;
  fin.close();
  if(*SavedNum > 0){
    vector<string> s;
    string *f = new string("");
    char *C = new char('a');
    string *Fn1 = new string("");
    string *Fn2 = new string("");
    string *Fname = new string("");
    while(*SavedNum > 0){
      cout<<"Available games to load: (Player name followed by Chapter number)"<<endl;
      *f = "";
      ifstream fi("Saved_Games/Saved_Games.txt");
      for(int i =0; i < *SavedNum; i++){
        getline(fi, *f);
	s.push_back(*f);
	cout<<*f<<endl;
//	cout<<s[i]<<endl;
      }
      fi.close();
      cout<<"Do you want to delete any saved game?\nEnter 'Y' for yes or any other character for no."<<endl;
      cin>>*C;
      if(*C == 'Y'){
        *Fn1 = "";
        *Fn2 = "";
	*Fname = "";
	cout<<"Enter Player Name and Chapter (with space) to delete game.\n";
	cin>>*Fn1>>*Fn2;
	*Fname = "Saved_Games/" + (*Fn1) + (*Fn2) + ".txt";
	if(!remove((*Fname).c_str())){
	  cout<<"Enter correct player name and chapter number.\n";
	}
	else{
	ofstream fout1("Saved_Games/Saved_Games_num.txt");
	fout1<<(*SavedNum - 1);
	fout1.close();
	ofstream fout2("Saved_Games/Saved_Games.txt");
	for(int i = 0; i < *SavedNum; i++){
	  if(s[i] != (*Fn1 + *Fn2)){
	  //  cout<<"S BEFORE INPUT"<<s[i]<<endl;
	    fout2<<s[i]<<endl;
	  }
	}
	*SavedNum = *SavedNum - 1;
	fout2.close();
        s.clear();
        }
      }
      else{
        break;
      }
    }
    delete f;
    f = 0;
    delete C;
    C = 0;
    delete Fn1;
    Fn1 = 0;
    delete Fn2;
    Fn2 = 0;
    delete Fname;
    Fname = 0;
  }
  delete SavedNum;
  SavedNum = 0;
}