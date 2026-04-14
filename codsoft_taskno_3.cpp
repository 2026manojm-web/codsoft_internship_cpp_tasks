#include <iostream>
using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"
#define PURPLE "\033[35m"
#define BOLD "\033[1m"

int main()
{
    cout << BOLD << YELLOW << "*******************************************  TIC TAC TOE  *******************************************" << RESET;

    char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', m = '9';
    int choice;
    char player = 'X';

    for (int i = 1; i <= 9; i++)
    {
        cout << "\n";

        // Row 1
        (a == 'X') ? cout << RED << a << RESET : (a == 'O') ? cout << GREEN << a << RESET
                                                            : cout << CYAN << a << RESET;
        cout << " | ";
        (b == 'X') ? cout << RED << b << RESET : (b == 'O') ? cout << GREEN << b << RESET
                                                            : cout << CYAN << b << RESET;
        cout << " | ";
        (c == 'X') ? cout << RED << c << RESET : (c == 'O') ? cout << GREEN << c << RESET
                                                            : cout << CYAN << c << RESET;

        cout << "\n"
             << PURPLE << "---------\n"
             << RESET;

        // Row 2
        (d == 'X') ? cout << RED << d << RESET : (d == 'O') ? cout << GREEN << d << RESET
                                                            : cout << CYAN << d << RESET;
        cout << " | ";
        (e == 'X') ? cout << RED << e << RESET : (e == 'O') ? cout << GREEN << e << RESET
                                                            : cout << CYAN << e << RESET;
        cout << " | ";
        (f == 'X') ? cout << RED << f << RESET : (f == 'O') ? cout << GREEN << f << RESET
                                                            : cout << CYAN << f << RESET;

        cout << "\n"
             << PURPLE << "---------\n"
             << RESET;

        // Row 3
        (g == 'X') ? cout << RED << g << RESET : (g == 'O') ? cout << GREEN << g << RESET
                                                            : cout << CYAN << g << RESET;
        cout << " | ";
        (h == 'X') ? cout << RED << h << RESET : (h == 'O') ? cout << GREEN << h << RESET
                                                            : cout << CYAN << h << RESET;
        cout << " | ";
        (m == 'X') ? cout << RED << m << RESET : (m == 'O') ? cout << GREEN << m << RESET
                                                            : cout << CYAN << m << RESET;

        cout << "\n";

        cout << "\n"
             << GREEN << "Player " << player << " enter position (1-9): " << RESET;
        cin >> choice;

        if (choice == 1 && a != 'X' && a != 'O')
            a = player;
        else if (choice == 2 && b != 'X' && b != 'O')
            b = player;
        else if (choice == 3 && c != 'X' && c != 'O')
            c = player;
        else if (choice == 4 && d != 'X' && d != 'O')
            d = player;
        else if (choice == 5 && e != 'X' && e != 'O')
            e = player;
        else if (choice == 6 && f != 'X' && f != 'O')
            f = player;
        else if (choice == 7 && g != 'X' && g != 'O')
            g = player;
        else if (choice == 8 && h != 'X' && h != 'O')
            h = player;
        else if (choice == 9 && m != 'X' && m != 'O')
            m = player;
        else
        {
            cout << RED << "Invalid move! Try again.\n"
                 << RESET;
            i--;
            continue;
        }

        if ((a == b && b == c) || (d == e && e == f) || (g == h && h == m) ||
            (a == d && d == g) || (b == e && e == h) || (c == f && f == m) ||
            (a == e && e == m) || (c == e && e == g))
        {
            cout << YELLOW << "\nPlayer " << BLUE << player << YELLOW << " Wins! \n"
                 << RESET;
            break;
        }

        if (player == 'X')
            player = 'O';
        else
            player = 'X';

        if (i == 9)
            cout << YELLOW << "\nGame is Draw!\n"
                 << RESET;
    }

    cout << "\n"
         << BOLD << PURPLE << "**************************************  THANK YOU FOR PLAYING  **************************************" << RESET << "\n\n";

    return 0;
}
