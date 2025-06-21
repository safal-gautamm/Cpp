#include <iostream>
using namespace std;

class Board
{
public:
    string board[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

    void print_board()
    {
        cout << endl;
        cout << board[0] << "|" << board[1] << "|" << board[2] << endl;
        cout << "-------" << endl;
        cout << board[3] << "|" << board[4] << "|" << board[5] << endl;
        cout << "-------" << endl;
        cout << board[6] << "|" << board[7] << "|" << board[8] << endl;
    }
    bool update_board(int position, char type)
    {
        if (board[position - 1] == " ")
        {
            board[position - 1] = type;
            return true;
        }
        else
        {
            cout << "Position already taken.." << endl;
            return false;
        }
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
        if ('x' == tolower(type))
        {
            cout << "Enter the name of Player 'X' : ";
            getline(cin, name);
            this->name = name;
            this->type = 'X';
        }
        else
        {
            cout << "Enter the name of Player 'O' : ";
            getline(cin, name);
            this->name = name;
            this->type = 'O';
        }
    }
};

class Game
{
public:
    Player player1;
    Player player2;
    Board board;
    Player *curr_player;
    Game()
    {
        player1.set_details('X');
        player2.set_details('O');
        curr_player = &player1;
    }
    void play()
    {
        int position;
        cout << "Need to enter position as [1 - 9]." << endl;
        while (true)
        {
            cout << endl;
            cout << curr_player->name << "'s turn: ";
            cin >> position;
            if (!(1 <= position && 9 >= position))
            {
                cout << "Invalid Position" << endl;
                continue;
            }
            bool update = board.update_board(position, curr_player->type);
            if (update)
            {
                board.print_board();

                if (curr_player == &player1)
                    curr_player = &player2;

                else
                    curr_player = &player1;
            }
        }
    }
};
int main()
{
    Game game;
    game.play();
    return 0;
}