#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char op;
    cout << "***********************************  SIMPLE CALCULATOR  ***********************************\n\n";
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    cout << "Enter any Operation to Perform (+ - * /): ";
    cin >> op;
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
            cout << "Infinity";
        }
        else
        {
            cout << num1 / num2;
        }
    }
    else
    {
        cout << "Try a Different operator only (+ - * /) are allowed";
    }
    cout << "\n\n***************************************  THANK YOU  ***************************************";
}
