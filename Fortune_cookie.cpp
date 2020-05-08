#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include "Fortune_cookie.h"
using namespace std;

void Fortune_cookie(){//THsi function outputs a random colour, number and sentence. THe color and the sentence is printed using File I/O
  srand(time(NULL));
  int *cfin1 = new int((rand() % 27));
  int *cfin2 = new int((rand() % 27 + 28));
  int *lucnumber = new int((rand() % 100 + 1));
  int *c = new int(0);
  ifstream fin("Chapters/Fortune_Cookies.txt");
  string *sentence = new string("");
  while(getline(fin,*sentence)){
    if(*c == *cfin1){
      cout<<*sentence<<endl;
    }
    if(*c == *cfin2){
      cout<<"Your lucky colour is: "<<*sentence<<endl;
      break;
    }
    *c = *c + 1;
  }
  fin.close();
  cout<<"Your Lucky number today is: "<<*lucnumber<<endl;
  delete c;
  c = 0;
  delete cfin1;
  cfin1 = 0;
  delete cfin2;
  cfin2 = 0;
  delete lucnumber;
  lucnumber = 0;
  delete sentence;
  sentence = 0;
}
