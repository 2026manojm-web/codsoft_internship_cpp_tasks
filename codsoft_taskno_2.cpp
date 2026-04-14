#include <iostream>
using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"

int main()
{
    float num1, num2;
    char op;

    cout << BOLD << YELLOW
         << "***********************************  SIMPLE CALCULATOR  ***********************************\n\n"
         << RESET;

    cout << CYAN << "Enter Number 1: " << RESET;
    cin >> num1;

    cout << CYAN << "Enter Number 2: " << RESET;
    cin >> num2;

    cout << CYAN << "Enter any Operation to Perform (+ - * /): " << RESET;
    cin >> op;

    cout << RED;

    if (op == '+')
    {
        cout << num1 + num2;
    }
    else if (op == '-')
    {
        cout << num1 - num2;
    }
    else if (op == '*')
    {
        cout << num1 * num2;
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            cout << RED << "Infinity";
        }
        else
        {
            cout << num1 / num2;
        }
    }
    else
    {
        cout << RED << "Try a Different operator only (+ - * /) are allowed";
    }

    cout << RESET;

    cout << "\n\n"
         << BOLD << GREEN
         << "***************************************  THANK YOU  ***************************************"
         << RESET;

    return 0;
}
