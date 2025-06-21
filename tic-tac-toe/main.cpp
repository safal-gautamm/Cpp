#include <iostream>
using namespace std;

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

class Player
{
public:
    string name;
    char type;

    void set_details(char type)
    {
        string name;
        if ('x' == tolower(type)){
            cout << "Enter the name of Player 'X' : " ;
            getline(cin, name);
            this->name = name;
            this->type = 'X';
        }
        else{
            cout << "Enter the name of Player 'O' : " ;
            getline(cin, name);
            this->name = name;
            this->type = 'O';
        }
    }

    void view_details()
    {
        cout << this->name << " is assigned with : " << this->type <<endl;
    }
};

class Game
{
    public:
        Player player1;
        Player player2;
        Board board;
        Player* curr_player;
    Game()
    {
        player1.set_details('X');
        player1.set_details('O');
        curr_player = &player1;
    }
    void play()
    {
        int posiion;

    }
};
int main()
{
    Game game;
    game.play();
}