#include<iostream>
#include<string>
#include<sstream>
#include "Choice.h"
using namespace std;

void Choice(int *Choice, int *num){//function to input the choice number inputted by the user and making sure that it is within the number of choices available
  int choicearr[6] = {1, 2, 3, 4, 5, 6};
  string *Cselect = new string("");
  int *check =new int(-1);
  while(true){
    *check = -1;
    cin>>*Cselect;
    for(int i = 0; i < *num; i++ ){
      if(*Cselect == to_string(choicearr[i])){
        *check = 1;
	break;
      }
    }
    if(*check == -1){
      cout<<"Enter correct choice."<<endl;
    }
    else{
      stringstream a(*Cselect);
      a>>*Choice;
      break;
    }
  }
  delete check;
  check = 0;
  delete Cselect;
  Cselect = 0;
}
