#include<iostream>
#include<string>
#include "PrintChapLines.h"
#include "Choice.h"
#include "Battle.h"
#include "Fight.h"
#include "Chap3.h"
using namespace std;

bool Chap3(string *Pname, int *Phitp, int *Phealth, int *Psol){//Funtion to implement chapter 3 of the game. It uses different functions from different cpp files and nested if-else statements to do so. If the game is lost then this function returns true, else it returns false
  int *Lines = new int(7);
  string *ChapFiles = new string("Chapters/Chapter3c1.txt");
  PrintChapLines(ChapFiles, Lines);//Printing lines from chapter files in Chapters directory
  int *Choice1 = new int(0);
  cout<<"Would you follow this sound and find out what animal it is?"<<endl;
  cout<<"Enter 1 for yes or 2 for no."<<endl;
  int *ChoiceNum = new int(2);
  Choice(Choice1, ChoiceNum);//getting choice of the player
  if(*Choice1 == 1){
    cout<<"You see a bear, which is stuck in one of the traps laid by the hunters."<<endl;
    cout<<"How will you approach the bear?"<<endl;
    cout<<"1.) Aggressively"<<endl;
    cout<<"2.) Fearfully"<<endl;
    cout<<"3.) Politely but cautiously"<<endl;
    cout<<"4.) Indifferently and in an ignoring manner"<<endl;
    *ChoiceNum = 4;
    Choice(Choice1, ChoiceNum);//getting choice of the player
    if(*Choice1 == 1 || *Choice1 == 4){//if-else statement to advance the game based on player's choice
      cout<<"You go close to the bear."<<endl<<"The bear attacks you."<<endl<<"3 Health Points lost."<<endl;
      *Phealth = *Phealth - 3;
      if(*Phealth <= 0){//return true to the main function if condition is satisfied
        delete Choice1;
	      Choice1 = 0;
	      delete ChoiceNum;
	      ChoiceNum = 0;
	      delete Lines;
	      Lines = 0;
	      delete ChapFiles;
	      ChapFiles = 0;
        return true;
      }
      cout<<"The bear 'apologises' to you saying that he thought you were the hunter who put him here."<<endl;
    }
    else{
      cout<<"You go close to the bear, slowly, sayoing repeatedly that you mean no harm"<<endl;
    }
    cout<<"The bear asks if you can help him."<<endl;
    cout<<"You are startled. The bear can talk!"<<endl;
    cout<<"He asks you to free him and give him some medicine."<<endl;
    cout<<"You remember that you have a rose that one of your soldiers found."<<endl;
    cout<<"Will you free him and give him the medicine or lie that you cannot help him?"<<endl;
    cout<<"Enter 1 or 2 according to your choice."<<endl;
    *ChoiceNum = 2;
    Choice(Choice1, ChoiceNum);//getting choice of the player
    if(*Choice1 == 1){//if-else statement to advance the game based on player's choice
      cout<<"You free the bear and give him the magic rose. All his wounds heal as he eats it."<<endl;
      cout<<"He thanks you."<<endl;
      cout<<"Suddenly more bears come out of the bushes."<<endl;
      cout<<"The bear hugs his family and says that they will help you."<<endl;
      cout<<"Soldiers +150"<<endl;
      *Psol = *Psol + 150;
    }
    else{
      cout<<"You say that you cannot help him."<<endl;
      cout<<"The bear bleeds and dies in front of you."<<endl;
      cout<<"Suddenly some more bears come out of the bushes. Seeing the bear in the trap, one of the bear accusses you to be the hunter and orders other bears to attack you."<<endl;
      string *Ename = new string("bear");
      int *Ehitp = new int(5);
      int *Ehealth = new int(24);
      int *Esol = new int(150);
      int *difficult = new int(10);
      if(Battle(Pname, Ename, Phealth, Phitp, Ehealth, Ehitp,difficult)){//return true to the main function if player loses the fight
        delete Choice1;
	      Choice1 = 0;
	      delete ChoiceNum;
	      ChoiceNum = 0;
	      delete Lines;
	      Lines = 0;
	      delete ChapFiles;
	      ChapFiles = 0;
	      return true;
      }
      if(Fight(Psol, Esol)){//return true to the main function if player loses the fight
        delete Choice1;
        Choice1 = 0;
      	delete ChoiceNum;
      	ChoiceNum = 0;
      	delete Lines;
      	Lines = 0;
      	delete ChapFiles;
      	ChapFiles = 0;
        return true;
      }
    }
  }
  else{
    cout<<"You go ahead, ignoring the sounds of the animal."<<endl;
  }
  return false;//return false to the main function if the player survives this chapter
}
/*
int main(){
The following code is to test the function(during development).
  string *Pname = new string("A");
  int *phi = new int(4);
  int *phe = new int(5);
  int *Pol = new int(50);
  Chap3(Pname, phi, phe, Pol);
}*/
