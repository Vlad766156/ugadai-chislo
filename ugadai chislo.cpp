#include <iostream>  
#include <cstdlib>
#include <ctime>  
using namespace std;

int main()  {
    while (true) {
        int difficulty;
        int random_number{};
        int user_guess{};
        cout << "1. EASY (1/2) 2. NORMAL (10) 3. HARD (100) 4. IMPOSSIBLE (10000) 5. Exit\n";
        cin >> difficulty;

        switch (difficulty) {
        case 1:
            srand(time(0));
            random_number = rand() % 2 + 1;
            break;
        case 2:
            srand(time(0));
            random_number = rand() % 10 + 1;
            break;
        case 3:
            srand(time(0));
            random_number = rand() % 100 + 1;
            break;
        case 4:
            srand(time(0));
            random_number = rand() % 10000 + 1;
            break;
        default:
            return 0;
        }

        while (true) {
            cout << "type the number: ";
            cin >> user_guess;

            if (user_guess < random_number) {
                cout << "Too low!\n";
            }
            else if (user_guess > random_number) {
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
