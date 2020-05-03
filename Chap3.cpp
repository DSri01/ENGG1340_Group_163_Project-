#include<iostream>
#include<string>
#include "PrintChapLines.h"
#include "Choice.h"
#include "Battle.h"
#include "Fight.h"
#include "Chap3.h"
using namespace std;

void Chap3(string *Pname, int *Phitp, int *Phealth, int *Psol){
  int *Lines = new int(7);
  string *ChapFiles = new string("Chapters/Chapter3c1.txt");
  PrintChapLines(ChapFiles, Lines);
  int *Choice1 = new int(0);
  cout<<"Would you follow this sound and find out what animal it is?\nEnter 1 for yes or 2 for no.\n";
  int *ChoiceNum = new int(2);
  Choice(Choice1, ChoiceNum);
  if(*Choice1 == 1){
    cout<<"You see a bear, which is stuck in one of the traps laid by the hunters.\nHow will you approach the bear?\n1.) Aggressively\n2.) Fearfully\n3.) Politely but cautiously\n4.) Indifferently and in an ignoring manner\n";
    *ChoiceNum = 4;
    Choice(Choice1, ChoiceNum);
    if(*Choice1 == 1 || *Choice1 == 4){
      cout<<"You go close to the bear.\nThe bear attacks you.\n3 Health Points lost.\n";
      *Phealth = *Phealth - 3;
      if(*Phealth <= 0){
        cout<<"GAME OVER\n";
	exit(0);
      }
      cout<<"The bear 'apologises' to you saying that he thought you were the hunter who put him here.\n";
    }
    else{
      cout<<"You go close to the bear, slowly, sayoing repeatedly that you mean no harm\n";
    }
    cout<<"The bear asks if you can help him.\nYou are startled. The bear can talk!\nHe asks you to free him and give him some medicine.\nYou remember that you have a rose that one of your soldiers found.";
    cout<<"Will you free him and give him the medicine or lie that you cannot help him?\nEnter 1 or 2 according to your choice.\n";
    *ChoiceNum = 2;
    Choice(Choice1, ChoiceNum);
    if(*Choice1 == 1){
      cout<<"You free the bear and give him the magic rose. All his wounds heal as he eats it.\nHe thanks you.\nSuddenly more bears come out of the bushes.\nThe bear hugs his family and says that they will help you.\nSoldiers +150\n";
      *Psol = *Psol + 150;
    }
    else{
      cout<<"You say that you cannot help him.\nThe bear bleeds and dies in front of you.\nSuddenly some more bears come out of the bushes. Seeing the bear in the trap, one of the bear accusses you to be the hunter and orders other bears to attack you.\n";
      string *Ename = new string("bear");
      int *Ehitp = new int(5);
      int *Ehealth = new int(24);
      int *Esol = new int(150);
      int *difficult = new int(10);
      Battle(Pname, Ename, Phealth, Phitp, Ehealth, Ehitp,difficult);
      Fight(Psol, Esol);
    }
  }
  else{
    cout<<"You go ahead, ignoring the sounds of the animal.\n";
  }
}
/*
int main(){
  string *Pname = new string("A");
  int *phi = new int(4);
  int *phe = new int(5);
  int *Pol = new int(50);
  Chap3(Pname, phi, phe, Pol);
}*/
