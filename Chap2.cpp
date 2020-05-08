#include<iostream>
#include<string>
#include "PrintChapLines.h"
#include "Choice.h"
#include "Chap2.h"
#include "Battle.h"
#include "Fight.h"
using namespace std;

bool Chap2(string *Pname, int *Phitp, int *Phealth, int *Psol, int *ChoiceC1){//Funtion to implement chapter 2 of the game. It uses different functions from different cpp files and nested if-else statements to do so
  cout<<"You go ahead on your path that takes you into the Enchanted Forest."<<endl;
  if(*ChoiceC1 == 2){//CHecking if player didn't save the village head
    cout<<"You suddenly see 25 of your uncle's soldiers. They say that the people from farmlands told your position and they get ready to attack you."<<endl;
    int *Esol1 = new int(24);
    string *Ename1 = new string("Enemy soldier");
    int *Ehi1 = new int(1);
    int *Ehe1 = new int(15);
    int *difficult1 = new int(25);
    if(Battle(Pname, Ename1, Phealth, Phitp, Ehe1, Ehi1, difficult1)){//return true to the main function if player loses the fight
      delete ChoiceC1;
      ChoiceC1 = 0;
      return true;
    }
    if(Fight(Psol, Esol1)){//return true to the main function if player loses the fight
      delete ChoiceC1;
      ChoiceC1 = 0;
      return true;
    }
  }
  delete ChoiceC1;
  ChoiceC1 = 0;
  int *Lines = new int(10);
  string *ChapFiles = new string("Chapters/Chapter2c1.txt");
  PrintChapLines(ChapFiles, Lines);
  int *Choice1 = new int(0);
  cout<<"Choose how you are going to approach this creature:"<<endl<<"1.) Aggressively."<<endl<<"2.) Fearfully."<<endl<<"3.) Politely but cautiously."<<endl<<"4.) Indifferently and in an ignoring manner."<<endl<<"Enter 1, 2, 3 or 4 based on your choice."<<endl;
  int *ChoiceNum = new int(4);
  Choice(Choice1, ChoiceNum);
  cout<<"The Creature attacks you!"<<endl;
  string *Ena2 = new string("mysterious creature");
  int *Ehe2 = new int(10);
  int *Ehi2 = new int(4);
  int *diffi2 = new int(20);
  if(Battle(Pname, Ena2, Phealth, Phitp, Ehe2, Ehi2, diffi2)){//return true to the main function if player loses the fight
    delete ChoiceNum;
    ChoiceNum = 0;
    delete Choice1;
    Choice1 = 0;
    delete Lines;
    Lines = 0;
    delete ChapFiles;
    ChapFiles = 0;
    return true;
  }
  *Phitp = *Phitp + 2;
  *Phealth = *Phealth + 10;
  *Psol = *Psol + 250;
  *Lines = 6;
  *ChapFiles = "Chapters/Chapter2c2.txt";
  PrintChapLines(ChapFiles, Lines);
  cout<<"Would you follow the sound and trace its origin or would you rather continue on your path ignoring the screams of pain?"<<endl<<"Enter 1 or 2 based on your choice."<<endl;
  *ChoiceNum = 2;
  Choice(Choice1, ChoiceNum);
  if(*Choice1 == 1){
    cout<<"You try to follow the sound and find that there is a person stuck inside a thick bushel with thorns piercing his entire body."<<endl<<"Blood and a thick green sap are oozing out of all the places the bush was touching."<<endl<<"You go forward to help him, but he warns you about the poison ivy bushes."<<endl<<"Will you help him anyway?"<<endl<<"Enter 1 to help or 2 to leave him."<<endl;
    Choice(Choice1, ChoiceNum);
    if(*Choice1 == 1){
      cout<<"You try to take the man out. The man asks you to not do so but you still keep going forward. You get hurt too, but the man chants a spell on you so that your health does not fall below 1."<<endl<<"Health points left = 1."<<endl;
      *Lines = 12;
      *ChapFiles = "Chapters/Chapter2c3.txt";
      PrintChapLines(ChapFiles, Lines);
      *Phealth = *Phealth + 2;
    }
    else{
      cout<<"You take his advice and ask for his forgiveness for not being able to help. He accepts it and tells you a way out of the forest. You go on while the man screams with pain."<<endl<<"But as you turned to see him one last time, you get pierced by a thorn of the bush too."<<endl<<"Health -3"<<endl;
      *Phealth = *Phealth - 3;
      if(*Phealth <= 0){//return true to the main function if condition is satisfied
        delete ChoiceNum;
        ChoiceNum = 0;
        delete Choice1;
        Choice1 = 0;
        delete Lines;
        Lines = 0;
        delete ChapFiles;
        ChapFiles = 0;
        return true;
      }
    }
  }
  else{
    cout<<"You ignore the sound and keep moving forward."<<endl;
  }
  cout<<"You see about 20 guards in the distance, and you attack them."<<endl;
  int *Eso2 = new int(20);
  if(Fight(Psol, Eso2)){//return true to the main function if player loses the fight
    delete Lines;
    Lines = 0;
    delete ChapFiles;
    ChapFiles = 0;
    delete Choice1;
    Choice1 = 0;
    delete ChoiceNum;
    ChoiceNum = 0;
  }
  cout<<"After the battle, you finally come out of the forest."<<endl;
  delete Choice1;
  Choice1 = 0;
  delete ChoiceNum;
  ChoiceNum = 0;
  delete ChapFiles;
  ChapFiles = 0;
  delete Lines;
  Lines = 0;
  return false;//return false to main function if player survives this chapter
}
/*
int main(){
  string *Pname = new string("A");
  int *phi = new int(4);
  int *phe = new int(5);
  int *Choiceinc1 = new int(2);
  int *Pol = new int(50);
  Chap2(Pname, phi, phe, Pol, Choiceinc1);
}*/
