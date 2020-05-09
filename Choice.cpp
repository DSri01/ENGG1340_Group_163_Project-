#include<iostream>
#include<string>
#include<sstream>
#include "Choice.h"
using namespace std;

void Choice(int *Choice, int *num){//function to input the choice number inputted by the user and making sure that it is within the number of choices available where num represents number of choices available. It converts string to int and int to string to do the comparisons
  int choicearr[6] = {1, 2, 3, 4, 5, 6};
  string *Cselect = new string("");//string is used here just in case if user inputs incorrectly.
  int *check =new int(-1);
  while(true){
    *check = -1;
    cin>>*Cselect;
    for(int i = 0; i < *num; i++ ){//loop to check if the choice entered is within the number of choices available(num)
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
