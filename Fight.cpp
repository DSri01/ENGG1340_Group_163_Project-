#include<iostream>
#include<cstdlib>
#include "Fight.h"
using namespace std;

void Fight(int *Psol, int *Esol){
  cout<<endl;
  cout<<"Battle begins.\nSoldiers from both sides fight."<<endl;
  srand(time(NULL));
  int *mercnum = new int((rand() % 6 + 4));
  if(*Psol < (*Esol - ((*Esol * (*mercnum)) / 100))){
    *Psol = -1;
  }
  else if(*Psol >= (*Esol -((*Esol * (*mercnum)) / 100)) && *Psol < *Esol){
    *Psol = *Psol - ((*Psol * (*mercnum + 85)) / 100);
  }
  else{
    *Psol = *Psol - ((*Psol * (*mercnum)) / 100);
  }
  if(*Psol == -1){
    cout<<"All your soldiers died."<<endl;
    cout<<"GAME OVER"<<endl;
    cout<<"You can restart the game from the latest save by re-running the game."<<endl;
    exit(0);
  }
  else{
    cout<<"Your soldiers defeat the enemy soldiers."<<endl;
    cout<<"Number of soldiers left = "<<*Psol<<endl;
    cout<<endl;
  }
  delete Esol;
  Esol = 0;
  delete mercnum;
  mercnum = 0;
}

int main(){
  int *Pso = new int(1000);
  int *Eso = new int(50);
  Fight(Pso, Eso);
  delete Pso;
  Pso = 0;
}
