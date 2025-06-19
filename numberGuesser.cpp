#include <time.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

    char egg = 'Y';

    while (egg == 'Y' || egg == 'y'){
        int difficultySetting;
        int difficultyChances;
        int number;
        int guess;
        bool guessed = false;

        srand(time(NULL));

        number = rand() % 100 + 1;

        cout << "Welcome to the Number Guessing Game!!!\n";
        cout <<"I'm thinking of a number between 1 and 100.\n";
        cout <<"\n";
        cout <<"Please select the difficulty level:\n";
        cout <<"1. Easy (10 Chances)\n";
        cout <<"2. Medium (5 Chances)\n";
        cout <<"3. Hard (3 Chances)\n";
        cout <<"\n";
        cout <<"Enter your choice (1/2/3):\n";
        cin >> difficultySetting;

        if (difficultySetting == 1) {
            difficultyChances = 10;
        }
        if (difficultySetting == 2) {
            difficultyChances = 5;
        }
        if (difficultySetting == 3) {
            difficultyChances = 3;
        }

        cout << "\nYou have " << difficultyChances << " chances!\n";
        // if (difficultyChances<0){

        for (int i = 0; i < difficultyChances; i++) {
            cin >> guess;

            if (guess == number){
                cout << "\nCongrats!! You guessed correctly!\n";
                guessed = true;
            }

            if (guessed == true){
                break;
            }

            else if (guess < number) {
                cout << "\nThat's too low.\n";
            }
            else {
                cout << "\nThat's too high.\n";
            }
            cout << "You have " << (difficultyChances - i - 1) << " chances left.\n\n";
        }

        if (!guessed){
            cout << "You didn't guess it...\n";
        }

        cout << "Would you like to play again? (Y/N)\n";
        cin >> egg;

        if (egg == 'Y' || egg == 'y') {
            cout << "\nStarting again...\n\n\n";
        }
        else {
            egg = 'N';
        }
    }

    return 0;
}