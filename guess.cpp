#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;

    // Seed for random number
    srand(time(0));

    // Generate random number between 1 and 100
    number = rand() % 100 + 1;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too High! Try again " << endl;
        } else if (guess < number) {
            cout << "Too Low! Try again " << endl;
        } else {
            cout << "Congratulations! You guessed the number!" << endl;
            cout << "Number of attempts: " << attempts << endl;
        }

    } while (guess != number);

    return 0;
}
