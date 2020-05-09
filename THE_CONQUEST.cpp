#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include "Chap1.h"
#include "Chap2.h"
#include "Chap3.h"
#include "Chap4.h"
#include "load_game.h"
#include "save_game.h"
#include "Fortune_cookie.h"
#include "Delete_game.h"
using namespace std;

void load(string *Pna, int *Phit, int *Pheal, int *Sol, string *ChapNum){//Function that peforms load game feature with the help of file I/O
  ifstream fin("Saved_Games/Saved_Games_num.txt");
  int *SavedNum = new int(0);
  fin>>*SavedNum;
  fin.close();
  if(*SavedNum > 0){
    cout<<"Available games to load: (Player name followed by Chapter number)"<<endl;//Checking and displaying all the previously saved games
    string *f = new string("");
    ifstream fi("Saved_Games/Saved_Games.txt");//saved games are stored in Saved_Games Directory
    for(int i = 0; i <= *SavedNum; i++){
      getline(fi,*f);
      cout<<*f<<endl;
    }
    delete f;
    f = 0;
    fi.close();
    char *C = new char(' ');
    cout<<"Do you want to load a game?"<<endl<<"Enter 'Y' for yes or 'N' for no."<<endl;
    while(true){
      cin>>*C;
      if(*C == 'Y'){
        load_game(Pna, Pheal, Phit, Sol, ChapNum);//set the values of the pouinter according to the game loaded
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
  else{
    cout<<"No games available to load."<<endl;
  }
  delete SavedNum;
  SavedNum = 0;
}

void save(string *Pna, int *Pheal, int *Phit, int *Psol, string *ChapNum){//function to save game status if the player wants to load the game later, by using file I/O.
  cout<<"Do you want to save the game?"<<endl<<"Enter 'Y' for yes or any other character for no."<<endl;
  char *c = new char('a');
  cin>>*c;
  if(*c == 'Y'){
    ifstream fin("Saved_Games/Saved_Games_num.txt");
    int *SavedNum = new int(0);
    fin>>*SavedNum;
    fin.close();
    save_game(Pna, Pheal, Phit, Psol, ChapNum);//stores the values of pointers into a txt file
    ofstream fout("Saved_Games/Saved_Games_num.txt");
    fout<<(*SavedNum + 1);
    fout.close();
    delete SavedNum;
    SavedNum = 0;
  }
  delete c;
  c = 0;
}

void Exit_Game(string *Pna, int *Phit, int *Pheal, int *Pso, string *CNum){//function to delete dynamic variables and exit game and calls delete function to ask player if (s)he wants to delete a previously saved game
  cout<<"You are now exiting the game."<<endl;
  cout<<"If you want to play again, run the Game executable file."<<endl;
  delete Pna;
  Pna = 0;
  delete Phit;
  Phit = 0;
  delete Pheal;
  Pheal = 0;
  delete Pso;
  Pso = 0;
  delete CNum;
  CNum = 0;
  Delete_game();//function to see if player wants to delete previously saved game
  exit(0);
}

int main(){
  string *Pname = new string("");//The player data is stored with the help of dynamic variables
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
    Fortune_cookie();//calls fortune cookie function
  }
  cout <<"Well then, Lets begin our game"<<endl;
  delete yes_no;
  yes_no = 0;
  load(Pname, Phitp, Phealth, Psol, ChapNum);//calls load function to see if the user wants to load a previously saved game.
  if(*ChapNum == "0"){//checks if player has loaded a game. If not, a new game is created
    cout<<"Enter your name. Please do not add any special character, numbers or 'space' character in your name."<<endl;
    while(true){//loop to take input in the desired format
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
    save(Pname, Phitp , Phealth, Psol, ChapNum);//calss save function to see if player wants to save game status
  }
  if(*ChapNum == "1"){
    cout<<""<<endl<<"Chapter 1: THE FARMLANDS."<<endl<<""<<endl;
    if(Chap1(Pname, Phitp, Phealth, Psol, ChoiceInChap1)){//calls the Chapter1 function. All the Chapter functions return true if the player looses the game and false if the player survives the game in the chapter
      cout<<"Game Over"<<endl;
      Exit_Game(Pname, Phitp, Phealth, Psol, ChapNum);//The game will automatically exit if the player LOOSES the game
    }
    *ChapNum = "2";//if player survivesd chapter 1, he will move onto the next chapter
  }
  if(*ChapNum == "2"){
    cout<<""<<endl<<"Chapter 2: THE ENCHANTED FOREST."<<endl<<""<<endl;
    if(Chap2(Pname, Phitp, Phealth, Psol, ChoiceInChap1)){//cehcking if player dies in Chapter2
      cout<<"Game Over"<<endl;
      Exit_Game(Pname, Phitp, Phealth, Psol, ChapNum);
    }
    else{//if player does not die in chapter 2, he can save the game, exit or keep going forward
      *ChapNum = "3";
      save(Pname, Phitp, Phealth, Psol, ChapNum);//saving the game status if player wants to do so
      char *y_n = new char('a');
      cout<<"Do you want to exit game?"<<endl<<"Enter Y for yes or any other character for no."<<endl;
      cin>>*y_n;
      if(*y_n == 'Y'){
        delete y_n;
        y_n = 0;
        Exit_Game(Pname, Phitp, Phealth, Psol, ChapNum);//exiting game if player wants to do so
      }
      delete y_n;
      y_n = 0;
    }
  }
  if(*ChapNum == "3"){
    cout<<""<<endl<<"Chapter 3: THE RIVER."<<endl<<""<<endl;
    if(Chap3(Pname, Phitp, Phealth, Psol)){//checking if player survives chapter3 if he does not, Exit_game() function is called. If he does then he can move forward
      cout<<"Game Over"<<endl;
      Exit_Game(Pname, Phitp, Phealth, Psol, ChapNum);//exit game if player wants to do so
    }
    else{
      *ChapNum = "4";
      save(Pname, Phitp, Phealth, Psol, ChapNum);
      char *y_n = new char('a');
      cout<<"Do you want to exit game?"<<endl<<"Enter Y for yes or any other character for no."<<endl;
      cin>>*y_n;
      if(*y_n == 'Y'){
        delete y_n;
        y_n = 0;
        Exit_Game(Pname, Phitp, Phealth, Psol, ChapNum);//exit game if player wants to do so
      }
      delete y_n;
      y_n = 0;
    }
  }
  if(*ChapNum == "4"){
    cout<<""<<endl<<"Chapter 4: THE FINAL BATTLE."<<endl<<""<<endl;
    if(Chap4(Pname, Phitp, Phealth, Psol)){//if player loses in CHapter 4 then the game ends
      cout<<"Game Over"<<endl;
      Exit_Game(Pname, Phitp, Phealth, Psol, ChapNum);
    }
    else{
      Exit_Game(Pname, Phitp, Phealth, Psol, ChapNum);//The game ends automatically if the player wins
    }
  }
  return 0;//end of program
}
