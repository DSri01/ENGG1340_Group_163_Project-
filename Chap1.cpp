#include<iostream>
#include "PrintChapLines.h"
#include "Battle.h"
#include<string>
#include "Choice.h"
#include "Chap1.h"
#include<cstdlib>
using namespace std;

bool Chap1(string *Pname, int *Phitp, int *Phealth, int *Psol, int *ChoiceC1){//Funtion to implement chapter 1 of the game. It uses different functions from different cpp files and nested if-else statements to do so
  int *Lines = new int(20);
  string *ChapFiles = new string("Chapters/Chapter1c1.txt");//stores where to find the lines for this chapter
  PrintChapLines(ChapFiles, Lines);
  string beast[4] = {"lion", "tiger", "leopard", "jaguar"};
  srand(time(NULL));
  int *ch = new int((rand() % 4));
  cout<<"You see a "<<beast[(*ch)]<<", ready to attack the village head!"<<endl;
  cout<<"You have a choice now:"<<endl<<"1.) Save the village head."<<endl<<"2.) Keep on moving, behind the bushes, away from the village."<<endl<<"Enter 1 or 2 depending on your choice."<<endl;
  int *ChoiceNum = new int(2);
  Choice(ChoiceC1, ChoiceNum);
  string *Ename = new string(beast[(*ch)]);
  delete ch;
  ch = 0;
  int *Ehitp = new int(1);
  int *Ehealth = new int(5);
  int *diff = new int(50);
  if(*ChoiceC1 == 1){
    cout<<"You pick up a shield that was lying near the bushes and run infront of the village head and defend him from the beast's claws."<<endl;
    if(Battle(Pname, Ename, Phealth, Phitp, Ehealth, Ehitp, diff)){
      delete ChapFiles;
      ChapFiles = 0;
      delete Lines;
      Lines = 0;
      delete ChoiceNum;
      ChoiceNum = 0;
      return true;
    }
    *Psol = *Psol + 50;
    *Phealth = *Phealth + 5;
    *Phitp = 4;
    cout<<"Completion rewards:"<<endl<<"+50 Soldiers"<<endl<<"New armour"<<endl<<"A sword from the village head (Hit points: 4)"<<endl;
  }
  else{
    cout<<"You watch the beast killing the village head. You suddenly step on a stick and it breaks, the beast sees you and runs towards you."<<endl;
    if(Battle(Pname, Ename, Phealth, Phitp, Ehealth, Ehitp, diff)){//if the player loses true is returned to the main function
      delete ChapFiles;
      ChapFiles = 0;
      delete Lines;
      Lines = 0;
      delete ChoiceNum;
      ChoiceNum = 0;
      return true;
    }
  }
  *ChapFiles = "Chapters/Chapter1c2.txt";
  *Lines = 3;
  PrintChapLines(ChapFiles, Lines);
  cout<<"You have a choice now:"<<endl<<"1.) Help the lady."<<endl<<"2.) Go Away."<<endl<<"Enter 1 or 2 depending on your choice."<<endl;
  int *Choice2 = new int(0);
  Choice(Choice2, ChoiceNum);
  if(*Choice2 == 1){
    cout<<"You help the woman by filling the bucket."<<endl<<"She sees your injuries."<<endl<<"She picks some leaves from a tree nearby and asks you to plce it on them"<<endl<<"Health: + 2"<<endl<<"She also asks you to keep a horse from her stable."<<endl<<"Horse = 10 soldiers added."<<endl;
    *Phealth = *Phealth + 2;
    *Psol = *Psol + 10;
    cout<<"She says that her son went into the woods nearby yesterday to hunt but he has not come back till now. She asks you to find him."<<endl<<"You:"<<endl<<"1.) Search for her son in the woods"<<endl<<"2.) Reject to find her son."<<endl<<"Enter 1 or 2 based on your choice."<<endl;
    Choice(Choice2, ChoiceNum);
    if(*Choice2 == 1){
      *ChapFiles = "Chapters/Chapter1c2a.txt";
      *Lines = 3;
      PrintChapLines(ChapFiles, Lines);
      cout<<"You:"<<endl<<"1.) Untie him now."<<endl<<"2.) Fight the cannibals first."<<endl<<"Enter 1 or 2 depending on your choice."<<endl;
      Choice(Choice2, ChoiceNum);
      if(*Choice2 == 1){
        cout<<"5 cannibals run towards you. But you are able to untie the man successfully."<<endl<<"He picks up his sword and kill all 5 of them himself."<<endl;
      }
      else{
        cout<<"You take an aggressive stance."<<endl;
        if(*Psol <= 10){
      	  return true;
      	}
      	else{
      	  srand(time(NULL));
      	  int *dead = new int((rand() % 4 + 2));
      	  cout<<"Your soldiers surround you."<<endl<<" They fight the cannibals but "<<*dead<<" die."<<endl;
      	  *Psol =*Psol - *dead;
      	  delete dead;
      	  dead = 0;
      	}
      }
       cout<<"You talk to the man who is an archer and he commands 25 soldiers of his tribe"<<endl<<"Completion awards:"<<endl<<"New ally: Cameron."<<endl<<"+35 Soldiers."<<endl;
      *Psol = *Psol + 35;
    }
    else{
      cout<<"You say to the lady that her son would be fine and that you have to go a long distance ahead."<<endl;
    }
  }
  else{
    cout<<"You ignore the unconscious old lady and go ahead."<<endl;
  }
  delete ChapFiles;
  ChapFiles = 0;
  delete Lines;
  Lines = 0;
  delete Choice2;
  Choice2 = 0;
  delete ChoiceNum;
  ChoiceNum = 0;
  return false;
}
/*
int main(){
  string *Pna = new string("A");
  int *Phit = new int(2);
  int *Pheal = new int(5);
  int *Pso = new int(0);
  int *Choic = new int(0);
  Chap1(Pna, Phit, Pheal, Pso, Choic);
  delete Pna;
  Pna = 0;
  delete Phit;
  Phit = 0;
  delete Pso;
  Pso = 0;
  delete Pheal;
  Pheal = 0;
  cout<<"Choic = "<<*Choic<<endl;
  delete Choic;
  Choic = 0;
}*/
