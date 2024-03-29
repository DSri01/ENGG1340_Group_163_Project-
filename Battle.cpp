#include<iostream>
#include<cstdlib>
#include<string>
#include "Battle.h"
using namespace std;

bool Battle(string *Pname, string *Ename, int *Phealth, int *Phitp, int *Ehealth, int *Ehitp, int *difficult){//Fuction to implement fight between to characters. The function returns true if player loses the fight
  string att_moves[5] = {"strikes from above", "strikes from below", "strikes from left", "strikes from right", "performs block break"};
  string def_moves[5] = {"defends above", "defends below", "defends left", "defends right", "performs complete block"};
  int *diffcount = new int(0);
  int *mvcount = new int(0);
  int *move_type = new int(0);//move_type stores the type of move by the enemy
  string *Pmove = new string("");
  cout<<"Battle begins"<<endl;
  while(true){
    srand(time(NULL));//The moves of the enemy is selected randomly
    *Pmove = "";
    cout<<endl;
    if(*diffcount != *difficult){//pointer difficult is used to determine when the next block break or complete block is going to happen by chekcing the value of diffcount
      *diffcount = *diffcount + 1;
      *move_type = rand() % 4;
    }
    else{
      *diffcount = 0;
      *move_type = 4;
    }
    if(*mvcount % 2 == 0){
      *mvcount = *mvcount + 1;
      cout<<*Ename<<" "<<att_moves[*move_type]<<endl;
      cout<<*Pname<<" choose defense move: left, right, below or, above"<<endl;
      while(true){
        cin>>*Pmove;
	if(*Pmove == "left" || *Pmove == "right" || *Pmove == "above" || *Pmove == "below"){
	  break;
	}
	else{
	  cout<<"Enter valid move"<<endl;
	}
      }
      if(("defends " + *Pmove) == def_moves[*move_type] && (*move_type != 4)){
        cout<<"No Health Point lost"<<endl;
      }
      else{
        cout<<"Health Points lost = "<<*Ehitp<<endl;
	*Phealth -= *Ehitp;
      }
    }
    else{
      *mvcount = *mvcount + 1;
      cout<<*Pname<<" choose attack move: left, right, below or, above"<<endl;
      while(true){
        cin>>*Pmove;
	if(*Pmove == "left" || *Pmove == "right" || *Pmove == "above" || *Pmove == "below"){
	  break;
	}
	else{
	  cout<<"Enter valid move"<<endl;
	}
      }
      if(("strikes from " + *Pmove) == att_moves[*move_type] || (*move_type == 4)){
        cout<<*Ename<<" successfully defends your move"<<endl;
      }
      else{
        cout<<*Ename<<" "<<def_moves[*move_type]<<endl;
	cout<<*Ename<<"'s health points lost = "<<*Phitp<<endl;
	*Ehealth -= *Phitp;
      }
    }
    if(*Phealth > 0 && *Ehealth > 0){
      cout<<"Your Health Points = "<<*Phealth<<endl;
      cout<<*Ename<<"'s Health Points = "<<*Ehealth<<endl;
    }
    else{
      if(*Phealth <= 0){
        return true;
      }
      else{
        *mvcount = -1;
        cout<<"You defeated "<<*Ename<<endl;
	break;
      }
    }
  }
  delete diffcount;
  diffcount = 0;
  delete mvcount;
  mvcount = 0;
  delete move_type;
  move_type = 0;
  delete Pmove;
  Pmove = 0;
  delete Ehealth;
  Ehealth = 0;
  delete Ehitp;
  Ehitp = 0;
  delete difficult;
  difficult = 0;
  return false;
}
/*
The following code is to test the function (during development)
int main(){
  string *Pname = new string("A1");
  string *Ename = new string("B2");
  int *Phe = new int(5);
  int *Phi = new int(1);
  int *Ehe = new int(5);
  int *Ehi = new int(1);
  int *Dif = new int(10);
  Battle(Pname, Ename, Phe, Phi, Ehe, Ehi, Dif);
  delete Pname;
  Pname = 0;
  delete Phe;
  Phe = 0;
  delete Phi;
  Phi = 0;
}*/
