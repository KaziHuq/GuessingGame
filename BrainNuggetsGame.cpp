#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// greetings/welcome notes

void welcomeNote() {
    cout << "Welcome to the great 'Brain Nuggets Guessing Game' " << endl;
    cout << "In this game you would be able to guess in between 1-100 " << endl;
    cout << "You would get to know how much attempts you took to guess the number" << endl;

}

// get set ready for making your brain look like chicken nuggets

int gameOn() {
    int guessNum, randNum, attempts = 0;
    srand(time(0)); // generating random seeds every sec
    randNum = rand() % 100 + 1; // generating random numbers till 100

    // a gigantic game loop
    do {
        cout << "Enter guess between 1 to 100" << endl;
        cin >> guessNum;
        attempts++; // players attempts increase every time

        if (guessNum < randNum) {
            cout << "Your guess number is lower" << endl;
        }
        else if (guessNum > randNum) {
            cout << "Your guess number is higher" << endl;
        }
        else {
            cout << "Congratulations! You've done it in " << attempts << "attempts" << endl;
        }

    } while (guessNum != randNum);

    return 0;
}


const char QUIT = 'Q'; // manifesting constant
const char PLAY = 'P'; // manifesting constant


// main function starting here

int main() {
    welcomeNote();
    gameOn();

    char choice;

    cout << "Would you like to play again? If yes,press 'P'.If no,press 'Q" << endl;
    cin >> choice;

    do {

        if (choice == 'P') {
            gameOn();
        }
        else if (choice == 'Q') {
            break;
        }


    } while (choice == 'P' && choice == 'Q');


    // every player will get a thanks note while quiting 
    cout << "Thank You for playing our 'Brain Nuggets Guessing Game.See you again!";


    return 0;
}