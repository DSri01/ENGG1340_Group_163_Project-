#include<iostream>
#include<cstdlib>
#include "Fight.h"
using namespace std;

bool Fight(int *Psol, int *Esol){
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
