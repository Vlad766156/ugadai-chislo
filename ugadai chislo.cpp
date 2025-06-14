#include <iostream>  
using namespace std;

int main()  {
    int difficulty;
    while (true) {
    cout << "1. EASY (1/2) 2. NORMAL (10) 3. HARD (100) 4. IMPOSIBLE (10000) 5. Exit\n";
    cin >> difficulty;
    int randNumber = 0;
    switch (difficulty) {
    case 1:
        randNumber = 1;
        break;
    case 2:
        randNumber = 6;
        break;
    case 3:
        randNumber = 74;
        break;
    case 4:
        randNumber = 65879;
        break;

    default:
        return 0;
    }
    while (true){
    int userGuess = 0;
    cout << "type the number: ";
    cin >> userGuess;

    if (userGuess < randNumber) {
        cout << "Too low!\n";
    }
    else if (userGuess > randNumber) {
        cout << "Too high!\n";
    }
    else {
        cout << "Congratulations! You guessed the number.\n";
        break;
    }
    }
   }  

   return 0;  
}
