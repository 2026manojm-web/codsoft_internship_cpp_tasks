#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int num, guess, count=0;

    srand(time(0));
    num= rand() % 100 + 1;

    cout << "\n*************************  NUMBER GUESSING GAME  *************************\n";

    cout << "\nRULES:-\n";
    cout << "Guess the Number Between 1 to 100\n\n";
    cout << "Guess Within 1-3 Attempts    = OUTSTANDING\n";
    cout << "Guess Within 4-6 Attempts    = EXCELLENT\n";
    cout << "Guess Within 7-9 Attempts    = VERY GOOD\n";
    cout << "Guess Within 10-12 Attempts  = GOOD\n";
    cout << "Guess Over 12 Attempts       = AVERAGE\n";

    while(true){

        cout << "\nENTER YOUR GUESS: ";
        cin >> guess;
        count++;

        if(num==guess){

            cout << "CORRECT !!! YOU NAILED IT !!!\n\n";
            cout << "ATTEMPTS: " << count << endl;

            if(count<=3)
                cout << "OUTSTANDING!!!\n\n";
            else if(count<=6)
                cout << "EXCELLENT!!!\n\n";
            else if(count<=9)
                cout << "VERY GOOD!!!\n\n";
            else if(count<=12)
                cout << "GOOD!!!\n\n";
            else
                cout << "AVERAGE!!!\n\n";  

            break;
        }
        
        else if(guess > num){

            int diff = guess - num;

            if(diff > 20)
                cout << "Too High! Try Again!\n";
            else if(diff > 5)
                cout << "High! Try Again!\n";
            else
                cout << "Too Close! Try a Smaller Number!\n";
        }

        else {

            int diff = num - guess;

            if(diff > 20)
                cout << "Too Low! Try Again!\n";
            else if(diff > 5)
                cout << "Low! Try Again!\n";
            else
                cout << "Too Close! Try a Bigger Number!\n";
        }
    }

    cout << "************************ THANK YOU FOR PLAYING!!! ************************";

    return 0;
}
