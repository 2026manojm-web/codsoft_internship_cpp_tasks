#include <iostream>2
#include <cstdlib>
#include <ctime>
using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define WHITE "\033[37m"
#define CYAN "\033[36m"
#define BRIGHT_GREEN "\033[92m"
#define BRIGHT_YELLOW "\033[93m"
#define BRIGHT_BLUE "\033[94m"
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"

int main()
{
    int num, guess, count = 0;

    srand(time(0));
    num = rand() % 100 + 1;

    cout << BOLD << BRIGHT_YELLOW << "\n*************************  NUMBER GUESSING GAME  *************************\n"
         << RESET;

    cout << CYAN << "\nRULES:-\n";
    cout << RED << "Guess the Number Between 1 to 100\n\n";
    cout << GREEN << "Guess Within 1-3 Attempts    = OUTSTANDING\n";
    cout << "Guess Within 4-6 Attempts    = EXCELLENT\n";
    cout << "Guess Within 7-9 Attempts    = VERY GOOD\n";
    cout << "Guess Within 10-12 Attempts  = GOOD\n";
    cout << "Guess Over 12 Attempts       = AVERAGE\n"
         << RESET;

    while (true)
    {

        cout << WHITE << "\nENTER YOUR GUESS: " << RESET;
        cin >> guess;
        count++;

        if (num == guess)
        {

            cout << GREEN << "CORRECT !!! YOU NAILED IT !!!\n\n";
            cout << BLUE << "ATTEMPTS: " << count << endl;
            cout << YELLOW;
            if (count <= 3)
                cout << "OUTSTANDING!!!\n\n";
            else if (count <= 6)
                cout << "EXCELLENT!!!\n\n";
            else if (count <= 9)
                cout << "VERY GOOD!!!\n\n";
            else if (count <= 12)
                cout << "GOOD!!!\n\n";
            else
                cout << "AVERAGE!!!\n\n";

            cout << RESET;
            break;
        }

        else if (guess > num)
        {

            int diff = guess - num;

            cout << RED;

            if (diff > 20)
                cout << "Too High! Try Again!\n";
            else if (diff > 5)
                cout << "High! Try Again!\n";
            else
                cout << "Too Close! Try a Smaller Number!\n";

            cout << RESET;
        }

        else
        {

            int diff = num - guess;

            cout << RED;

            if (diff > 20)
                cout << "Too Low! Try Again!\n";
            else if (diff > 5)
                cout << "Low! Try Again!\n";
            else
                cout << "Too Close! Try a Bigger Number!\n";

            cout << RESET;
        }
    }

    cout << BOLD << PURPLE << "************************ THANK YOU FOR PLAYING!!! ************************\n\n\n\n"
         << RESET;

    return 0;
}
