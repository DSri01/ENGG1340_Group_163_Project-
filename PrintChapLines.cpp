#include<iostream>
#include<string>
#include<fstream>
#include "PrintChapLines.h"
using namespace std;

void PrintChapLines(string *FileName, int *Lines){//THis function prints the Chapter storyline in different .txt files with help of file I/O.THe file name is given as input along with the number of lines to be printed
  ifstream fin((*FileName).c_str());
  string *f = new string("");
  string *s = new string("");
  while(*Lines > 0){//loop to print lines one by one
    getline(fin,*f);
    cout<<*f<<endl;
    *Lines = *Lines - 1;
    cout<<endl;
    while(true){
      cout<<"Enter s to continue"<<endl;//The function will print the next line only if s is entered
      cin>>*s;
      if((*s) == "s"){
        break;
      }
      else{
        cout<<"Enter s to continue"<<endl;
      }
    }
  }
  fin.close();
  delete f;
  f = 0;
}
/*
int main(){
  string *FN = new string("Chapter1.txt");
  int *L = new int(10);
  PrintChapLines(FN, L);
  delete FN;
  FN = 0;
  delete L;
  L = 0;
}*/
