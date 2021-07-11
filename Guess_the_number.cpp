// Guess the number game

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int number ,guess ,nguess = 1;
    srand(time(0));
    number = rand()%100 + 1;            //Generate a random number between 1 to 100
    // cout<<"The number is "<<number<<endl;
    cout<<"\n\n\tGuess the Number\n"<<endl;

    do{
        cout<<"Enter a number between 1 to 100."<<endl;
        cin>>guess;
        if(guess>number){
            cout<<"Lower number please!! "<<endl;
        }
        else if(guess<number){
            cout<<"Heigher number please!! "<<endl;
        }
        else {
            cout<<"You guessed it in "<<nguess<<" attempts."<<endl;
        }
        nguess++;
    } while (guess!=number);
    
return 0;
}
