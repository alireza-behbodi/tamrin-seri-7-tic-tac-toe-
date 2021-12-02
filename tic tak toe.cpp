#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
void start()
{
    int number;
    cout << "____________________________________________________________________________________________________" << endl;
    cout << "____________________________OK WLCOME TO THE TIC-TAC-TOE GAME_______________________________________" << endl;
    cout << "THE TOSS IS GOING TO BE DONE\n";
    cout << "____________________________________________READY___________________________________________________" << endl;
    cout << "Decide HEAD OR TAIL\n";
    cout << "press any random number:\t";
    cin >> number;
    switch (number % 2)
    {
    case 0:cout << "HEAD Won the toss\n";
        break;
    case 1:cout << "TAIL Won the toss\n";
        break;
    }
    cout << "_________________________OK START YOUR GAME NOW\n";
}

void design()
{
    system("CLS");
    char arr[3][3] = { { '1','2','3' },{ '4','5','6'},{ '7','8','9'} };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "|" << arr[i][j] << "|";

        }
        cout << endl;
    }
}

int main()
{
    string name1, name2;
    start();
    system("pause");
    system("CLS");
    cout << "Enter your name player 1 which won the toss\n";
    cin >> name1;
    cout << "Enter your name player 2 who lost the toss\n";
    cin >> name2;
    cout << "Player 1 is'" << name1 << "'choose head or tail\n\n";
    cout << "Player 2 is'" << name2 << "'enter any number\n\n";
    cout << "X is for player " << name1 << endl;
    cout << "# is for player " << name2 << endl;
    design();
    char arr[3][3] = { { '1','2','3' },{ '4','5','6'},{ '7','8','9'} };
    int count = 0, isGameOver = 0, number;
    bool wrong = false;
    while (count < 9 && isGameOver != 1)
    {
        switch (count % 2)
        {
        case 0:
        {
            count++;
            cout << "Its Player________________________________ " << name1 << "___________________________turn\n";
            cout << "                                                                                          " << name1 << " has X SYMBOL\n";
            cout << "                                                                                          " << name2 << " has # SYMBOL\n";
            cout << "Enter the number\n";
            cin >> number;
            switch (number)
            {
            case 1:
            {
                if (arr[0][0] == 'X' || arr[0][0] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[0][0] = 'X';
                }
                break;
            }
            case 2:
            {
                if (arr[0][1] == 'X' || arr[0][1] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[0][1] = 'X';
                }
                break;
            }
            case 3:
            {
                if (arr[0][2] == 'X' || arr[0][2] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[0][2] = 'X';
                }
                break;
            }
            case 4:
            {
                if (arr[1][0] == 'X' || arr[1][0] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                {
                    arr[1][0] = 'X';
                }
                break;
            }
            case 5:
            {
                if (arr[1][1] == 'X' || arr[1][1] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[1][1] = 'X';
                }
                break;
            }
            case 6:
            {
                if (arr[1][2] == 'X' || arr[1][2] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[1][2] = 'X';
                }
                break;
            }
            case 7:
            {
                if (arr[2][0] == 'X' || arr[2][0] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[2][0] = 'X';
                }
                break;
            }
            case 8:
            {
                if (arr[2][1] == 'X' || arr[2][1] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[2][1] = 'X';
                }
                break;
            }
            case 9:
            {
                if (arr[2][2] == 'X' || arr[2][2] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[2][2] = 'X';
                }
                break;
            }
            }
            system("CLS");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << "|" << arr[i][j] << "|";

                }
                cout << endl;
            }

            if (((arr[0][0] == 'X') && (arr[0][1] == 'X') && (arr[0][2] == 'X')) ||
                ((arr[1][0] == 'X') && (arr[1][1] == 'X') && (arr[1][2] == 'X')) ||
                ((arr[2][0] == 'X') && (arr[2][1] == 'X') && (arr[2][2] == 'X')) ||
                ((arr[0][2] == 'X') && (arr[1][2] == 'X') && (arr[2][2] == 'X')) ||
                ((arr[0][1] == 'X') && (arr[1][1] == 'X') && (arr[2][1] == 'X')) ||
                ((arr[0][0] == 'X') && (arr[1][0] == 'X') && (arr[2][0] == 'X')) ||
                ((arr[0][0] == 'X') && (arr[1][1] == 'X') && (arr[2][2] == 'X')) ||
                ((arr[0][2] == 'X') && (arr[1][1] == 'X') && (arr[2][0] == 'X')))
            {
                cout << "player     ________________" << name1 << "   _________________________wins";
                isGameOver = 1;
            }
            else if (count == 9)
            {
                cout << "\n\n\nDRAW has occured";
                isGameOver = 1;

            }
            break;
        }

        case 1:
        {
            count++;
            cout << "Its Player ____________________________ " << name2 << " ____________________________________ turn\n";
            cout << "                                                                                          " << name2 << " has # SYMBOL\n";
            cout << "                                                                                          " << name1 << " has X SYMBOL\n";
            cout << "Enter the number\n";
            cin >> number;
            switch (number)
            {
            case 1:
            {
                if (arr[0][0] == 'X' || arr[0][0] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[0][0] = '#';
                }
                break;
            }
            case 2:
            {
                if (arr[0][1] == 'X' || arr[0][1] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[0][1] = '#';
                }
                break;
            }
            case 3:
            {
                if (arr[0][2] == 'X' || arr[0][2] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[0][2] = '#';
                }
                break;
            }
            case 4:
            {
                if (arr[1][0] == 'X' || arr[1][0] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[1][0] = '#';
                }
                break;
            }
            case 5:
            {
                if (arr[1][1] == 'X' || arr[1][1] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[1][1] = '#';
                }
                break;
            }
            case 6:
            {
                if (arr[1][2] == 'X' || arr[1][2] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[1][2] = '#';
                }
                break;
            }
            case 7:
            {
                if (arr[2][0] == 'X' || arr[2][0] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[2][0] = '#';
                }
                break;
            }
            case 8:
            {
                if (arr[2][1] == 'X' || arr[2][1] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[2][1] = '#';
                }
                break;
            }
            case 9:
            {
                if (arr[2][2] == 'X' || arr[2][2] == '#')
                {
                    cout << "Enter another number";
                    cout << "Enter the number\n";
                    cin >> number;
                    wrong = true;
                }
                else
                {
                    arr[2][2] = '#';
                }
                break;
            }
            default:cout << "Enter right number please";
            }
            system("CLS");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << "|" << arr[i][j] << "|";

                }
                cout << endl;
            }

            if (((arr[0][0] == 'o') && (arr[0][1] == 'o') && (arr[0][2] == 'o')) ||
                ((arr[1][0] == 'o') && (arr[1][1] == 'o') && (arr[1][2] == 'o')) ||
                ((arr[2][0] == 'o') && (arr[2][1] == 'o') && (arr[2][2] == 'o')) ||
                ((arr[0][2] == 'o') && (arr[1][2] == 'o') && (arr[2][2] == 'o')) ||
                ((arr[0][1] == 'o') && (arr[1][1] == 'o') && (arr[2][1] == 'o')) ||
                ((arr[0][0] == 'o') && (arr[1][0] == 'o') && (arr[2][0] == 'o')) ||
                ((arr[0][0] == 'o') && (arr[1][1] == 'o') && (arr[2][2] == 'o')) ||
                ((arr[0][2] == 'o') && (arr[1][1] == 'o') && (arr[2][0] == 'o')))
            {
                cout << "player_________________________" << name2 << "__________________wins";
                isGameOver = 1;
            }
            else if (count == 9)
            {
                cout << "\n\n\nDRAW has occured";
                isGameOver = 1;
            }
            break;
        }
        }
    }
    return 0;
}
