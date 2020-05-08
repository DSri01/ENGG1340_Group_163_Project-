#include<iostream>
#include<string>
#include<cstdlib>
#include "PrintChapLines.h"
#include "Battle.h"
#include "Fight.h"
#include "Choice.h"
#include "Chap4.h"
using namespace std;

bool Chap4(string *Pname, int *Phitp, int *Phealth, int *Psol){
  int *Lines = new int(6);
  string *ChapFiles = new string("Chapters/Chapter4c1.txt");
  PrintChapLines(ChapFiles, Lines);
  int *Choice1 = new int(0);
  int *ChoiceNum = new int(3);
  cout<<"Will you:\n1.) Take a defensive stance.\n2.) Step forward and try to disarm him.\n3.) Kill him.\nEnter 1, 2 or 3 based on your choice."<<endl;
  Choice(Choice1, ChoiceNum);
  if(*Choice1 == 1 || *Choice1 == 2){
    *Lines = 3;
    *ChapFiles = "Chapters/Chapter4c2.txt";
    PrintChapLines(ChapFiles, Lines);
    cout<<"Do you accept this offer?\nEnter 1 for yes or 2 for no."<<endl;
    *ChoiceNum = 2;
    Choice(Choice1, ChoiceNum);
    if(*Choice1 == 1){
      srand(time(NULL));
      *Psol = *Psol + rand()%101 + 300;
    }
    else{
      cout<<"You reject his offer."<<endl;
    }
  }
  else{
    cout<<"As he comes close to you, you swing your sword, but as you do so, you see that the man drops his sword, meaning that he isn't here to help you, but now it is too late to yourself and you hit him in his head.\nHe dies instantly"<<endl;
  }
  *Lines = 6;
  *ChapFiles = "Chapters/Chapter4c3.txt";
  PrintChapLines(ChapFiles, Lines);
  cout<<"What formation do you want to use?:\n1.) Triangular\n2.) Block or rectangular\n3.) Semicircle\n Enter 1, 2 or 3 based on your choice"<<endl;
  *ChoiceNum = 3;
  Choice(Choice1, ChoiceNum);
  *ChapFiles = "Chapters/Chapter4c4.txt";
  *Lines = 12;
  PrintChapLines(ChapFiles, Lines);
  string *Ename = new string("Cyrus");
  int *Ehitp = new int(7);
  int *Ehealth = new int(25);
  int *Esol = new int(100);
  int *difficult = new int(5);
  if(Battle(Pname, Ename, Phealth, Phitp, Ehealth, Ehitp,difficult)){
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
  if(Fight(Psol, Esol)){
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
  return false;
}
