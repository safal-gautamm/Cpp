#include <iostream>
using namespace std;

class Game
{
    public:
        string name;

    Game(string name): name(name){}
};

class Board
{
    public:
    string board[9] = {"   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   "};

    void print_board()
    {
        cout << board[0] << "|" << board[1] << "|" << board[2] << endl;
        cout << "-----------" << endl;
        cout << board[3] << "|" << board[4] << "|" << board[5] << endl;
        cout << "-----------" << endl;
        cout << board[6] << "|" << board[7] << "|" << board[8] << endl;
    }
};

int main()
{
    // string name1, name2;
    // cout << "Enter the name of Player 1: ";
    // cin >> name1;
    // cout << "Enter the name of Player 2: ";
    // cin >> name2;

    // Game player1(name1);
    // Game player2(name2);
    Board board;
    board.print_board();
}