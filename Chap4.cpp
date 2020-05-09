#include<iostream>
#include<string>
#include<cstdlib>
#include "PrintChapLines.h"
#include "Battle.h"
#include "Fight.h"
#include "Choice.h"
#include "Chap4.h"
using namespace std;

bool Chap4(string *Pname, int *Phitp, int *Phealth, int *Psol){//Funtion to implement chapter 4 of the game. It uses different functions from different cpp files and nested if-else statements to do so. If the game is lost then this function returns true, else it returns false
  int *Lines = new int(6);
  string *ChapFiles = new string("Chapters/Chapter4c1.txt");
  PrintChapLines(ChapFiles, Lines);//Printing lines from chapter files in Chapters directory
  int *Choice1 = new int(0);
  int *ChoiceNum = new int(3);
  cout<<"Will you:"<<endl<<"1.) Take a defensive stance."<<endl;
  cout<<"2.) Step forward and try to disarm him."<<endl;
  cout<<"3.) Kill him."<<endl;
  cout<<"Enter 1, 2 or 3 based on your choice."<<endl;
  Choice(Choice1, ChoiceNum);//getting choice of the player
  if(*Choice1 == 1 || *Choice1 == 2){//nested if-else satement to advance game based on player's choice
    *Lines = 3;
    *ChapFiles = "Chapters/Chapter4c2.txt";
    PrintChapLines(ChapFiles, Lines);//Printing lines from chapter files in Chapters directory
    cout<<"Do you accept this offer?"<<endl;
    cout<<"Enter 1 for yes or 2 for no."<<endl;
    *ChoiceNum = 2;
    Choice(Choice1, ChoiceNum);//getting choice of the player
    if(*Choice1 == 1){
      srand(time(NULL));
      *Psol = *Psol + rand()%101 + 300;//adding random number of soldiers in player's troops
    }
    else{
      cout<<"You reject his offer."<<endl;
    }
  }
  else{
    cout<<"As he comes close to you, you swing your sword, but as you do so, you see that the man drops his sword, meaning that he isn't here to help you, but now it is too late to yourself and you hit him in his head."<<endl;
    cout<<"He dies instantly"<<endl;
  }
  *Lines = 6;
  *ChapFiles = "Chapters/Chapter4c3.txt";
  PrintChapLines(ChapFiles, Lines);
  cout<<"What formation do you want to use?:"<<endl<<"1.) Triangular"<<endl<<"2.) Block or rectangular"<<endl<<"3.) Semicircle"<<endl<<"Enter 1, 2 or 3 based on your choice"<<endl;
  *ChoiceNum = 3;
  Choice(Choice1, ChoiceNum);//getting choice of the player
  *ChapFiles = "Chapters/Chapter4c4.txt";
  *Lines = 12;
  *Phitp = *Phitp - 2;
  PrintChapLines(ChapFiles, Lines);//Printing lines from chapter files in Chapters directory
  string *Ename = new string("Cyrus");//storing enemy's data
  int *Ehitp = new int(7);
  int *Ehealth = new int(25);
  int *Esol = new int(400);
  int *difficult = new int(4);
  if(Battle(Pname, Ename, Phealth, Phitp, Ehealth, Ehitp,difficult)){//return true to the main function if player loses the fight
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
  cout<<"You proceed to the main court where you are crowned as the ruler of Astoria."<<endl;
  cout<<*Pname<<", you have won the game."<<endl;
  return false;//return false to the main function if player wins the game
}
