#include <iostream>
using namespace std;

void clear_board(char d[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            d[i][j] = '.';
}

void print_board(char d[3][3])
{
    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

bool check_win(char d[3][3], char p)
{

    for (int i = 0; i < 3; i++)
        if (d[i][0] == p && d[i][1] == p && d[i][2] == p) return true;


    for (int j = 0; j < 3; j++)
        if (d[0][j] == p && d[1][j] == p && d[2][j] == p) return true;


    if (d[0][0] == p && d[1][1] == p && d[2][2] == p) return true;
    if (d[0][2] == p && d[1][1] == p && d[2][0] == p) return true;

    return false;
}

void player_move(char d[3][3], char symbol)
{
    int r, c;
    while (true)
    {
        cout << "Player " << symbol << " _x and y_ (0-2): ";
        cin >> r >> c;

        if (r < 0 || r > 2 || c < 0 || c > 2) {
            cout << "sxal"<<endl;
            continue;
        }

        if (d[r][c] != '.') {
            cout << "zbaxvac" << endl;
            continue;
        }

        d[r][c] = symbol;
        break;
    }
}

int main()
{
    char board[3][3];
    clear_board(board);

    char turn = 'X';

    for (int moves = 0; moves < 9; moves++)
    {
        print_board(board);
        player_move(board, turn);

        if (check_win(board, turn)) {
            print_board(board);
            cout << "Player " << turn << " WINS!" << endl;
            return 0;
        }


        if (turn == 'X') turn = '0';
        else turn = 'X';
    }

    print_board(board);
    cout << "DRAW!" << endl;

    return 0;
}
