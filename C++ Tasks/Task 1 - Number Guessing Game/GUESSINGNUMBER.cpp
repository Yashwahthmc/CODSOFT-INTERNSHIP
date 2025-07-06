#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int numberToGuess=rand() % 100 + 1;
    int userGuess;
    int attempts=0;
    cout<<"🎯 Welcome to Yashwanth's Number Guessing Game!"<<endl;
    cout<<"I've picked a number between 1 and 100. Try to guess it!"<<endl;
    do {
        cout<<"Enter your guess:";
        cin>>userGuess;
        attempts++;
        if(userGuess>numberToGuess) {
            cout<<"Too high! Try again."<<endl;
        } else if(userGuess<numberToGuess){
            cout<<"Too low! Try again."<<endl;
        } else{
            cout<<"🎉 Congratulations! You guessed the number in "<<attempts<<" attempts."<<endl;
        }
    } while (userGuess!=numberToGuess);
    return 0;
}
