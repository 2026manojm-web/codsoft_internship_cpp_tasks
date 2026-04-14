#include <iostream>
using namespace std;

int main()
{
    cout << "******************************************* TIC TAC TOE *******************************************";

    char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', m = '9';
    int choice;
    char player = 'X';

    for (int i = 1; i <= 9; i++)
    {
        cout << "\n";
        cout << a << " | " << b << " | " << c << "\n";
        cout << "---------\n";
        cout << d << " | " << e << " | " << f << "\n";
        cout << "---------\n";
        cout << g << " | " << h << " | " << m << "\n";

        cout << "\nPlayer " << player << " enter position (1-9): ";
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
            cout << "Invalid move! Try again.\n";
            i--;
            continue;
        }

        if ((a == b && b == c) || (d == e && e == f) || (g == h && h == m) ||
            (a == d && d == g) || (b == e && e == h) || (c == f && f == m) ||
            (a == e && e == m) || (c == e && e == g))
        {
            cout << "\nPlayer " << player << " wins! 🎉\n";
            break;
        }

        if (player == 'X')
            player = 'O';
        else
            player = 'X';

        if (i == 9)
            cout << "\nGame is Draw!\n";
    }

    cout << "\n************************************** THANK YOU FOR PLAYING **************************************\n\n\n\n";

    return 0;
}
