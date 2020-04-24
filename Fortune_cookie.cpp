#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Fortune_cookie.h"
using namespace std;

void Fortune_cookie(){

    srand(time (NULL));
    int x,y,z;

    x=rand()%25;
    srand(time (NULL));
    y=rand()%25;
    z=rand()%101+1;


    string phrases[27]={"~You will meet someone new today~", "~Be ready for something unexpected~", "~You will reunite with someone You haven't met in a long while~", "~Your day will be boring today~", "~You  will have to do something you wont like but it will bring joy~", "~You are going to complete all pending tasks today~", "~You will encounter an awkward but funny situation~", "~Have patience, Your wish will come true~", "~Dont stress, this  hard time will pass~", "~Try something new, you will like it~", "~Brace yourself for oncoming changes~", "~You will be lost in your thoughts today~", "~Help someone out and theyll help when you need it most~", "~A big problem will be resolved today~",  "~Carelessness will be a bliss today~", "~Solve a mystery but another one will appear~", "~Help will appear out of a most unexpected place~", "~Friends will reunite~", "~You will be busy as a bee but not for very long~", "~Do it, don't fret it~", "~Ask and it will be granted~", "~Don't forget to smile, you will actually feel ecstatic~", "~It's your lucky day~", "~When door closes another opens~", "~Dont giveup now you are almost there~", "~Hey smile, you just read SOMETHING FUNNY~", "~Lonliness will be filled with creativity so cheer up~"};  


    string colours[27]={"True Gold","Sapphire Blue", "Mauve", "Crimson", "Rose gold", "Magenta", "Lemon Yellow", "Orange", "Leaf Green", "Midnight Blue", "Sunset pink", "Pure White", "Aqua", "Cherrywood", "Cherry red", "Emerald green", "Pearl white", "Amethyst purple", "Black", "Turmeric Yellow", "Candy Pink","Silver","Soft Grey","Dark Brown","Violet","Peach"};

    cout<< phrases[x]<<endl<< "Your Lucky Colour is: "<<colours[y]<<endl<<"Your Lucky number today is: "<<z<<endl; 

}
int main(){
    return 0;
}

