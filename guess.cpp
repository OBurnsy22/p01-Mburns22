//Author: Matthew Burns
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {

    srand ( time (NULL) );
    int randomnumber;
    int guess;
    string play;

    do{
    randomnumber = rand() % 10 + 1; 

    cout<<"Guess the computer's number(1-10):"<<endl;
    cin>>guess;

    if(guess>randomnumber || guess<randomnumber) 
    {
    int A;
    int B;

    A = guess - randomnumber;
    B = abs (A); 

    cout<<"You were off by "<<B<<". Sorry, you lose."<<endl;
    }
    else
    {
    cout<<"You, guessed correctly!  You win!"<<endl;
    }
    
    cout<<"Would you like to play again?(Yes/No)"<<endl;
    cin>>play;
    }while (play == "Yes" || play == "yes"); 

    return 0;
    }
    
