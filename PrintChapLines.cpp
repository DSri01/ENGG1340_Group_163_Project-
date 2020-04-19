#include<iostream>
#include<string>
#include<fstream>
#include "PrintChapLines.h"
using namespace std;

void PrintChapLines(string *FileName, int *Lines){
  ifstream fin((*FileName).c_str());
  string *f = new string("");
  while(*Lines > 0){
    getline(fin,*f);
    cout<<*f<<endl;
    *Lines = *Lines - 1;
  }
  fin.close();
  delete Lines;
  Lines = 0;
  delete f;
  f = 0;
}

int main(){
  string *FN = new string("Chapter1.txt");
  int *L = new int(1);
  PrintChapLines(FN, L);
  delete FN;
  FN = 0;
}
