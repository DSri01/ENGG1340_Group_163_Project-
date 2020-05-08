#include<iostream>
#include<cstdlib>
#include "Fight.h"
using namespace std;

bool Fight(int *Psol, int *Esol){//this function return true if the player loses a fight between soldiers
  cout<<endl;
  cout<<"Battle begins.\nSoldiers from both sides fight."<<endl;
  srand(time(NULL));
  int *mercnum = new int((rand() % 6 + 4));//mercy number: if the player's soldiers is about 4%-10% less than enemy's soldiers then the player is shown mercy. (S)He will win this battle. THis number is randomly calcuklated
  if(*Psol < (*Esol - ((*Esol * (*mercnum)) / 100))){
    *Psol = -1;
  }
  else if(*Psol >= (*Esol -((*Esol * (*mercnum)) / 100)) && *Psol < *Esol){
    *Psol = *Psol - ((*Psol * (*mercnum + 85)) / 100);
  }
  else{//The loss in number of soldiers is calculated by subtracting a random percentage of the number of soldiers if number ofplayer's soldiers > enemy's soldiers
    *Psol = *Psol - ((*Psol * (*mercnum)) / 100);
  }
  delete Esol;
  Esol = 0;
  delete mercnum;
  mercnum = 0;
  if(*Psol == -1){
    return true;
  }
  else{
    cout<<"Your soldiers defeat the enemy soldiers."<<endl;
    cout<<"Number of soldiers left = "<<*Psol<<endl;
    cout<<endl;
    return false;
  }
}
/*
int main(){
  int *Pso = new int(1000);
  int *Eso = new int(50);
  Fight(Pso, Eso);
  delete Pso;
  Pso = 0;
}*/
