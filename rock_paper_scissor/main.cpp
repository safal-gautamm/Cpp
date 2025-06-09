#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string get_computer_choice()
{
    srand(time(NULL));
    int rand_num = rand() % 3 + 1;
    switch (rand_num)
    {
    case 1:
        return "rock";
        break;
    case 2:
        return "paper";
        break;
    case 3:
        return "scissors";
    default:
        break;
    }
}
string get_user_input()
{
    string users;
    cout << "Choose [Rock, Paper, Scissor] :" << endl;
    cin >> users;

    users = to_lower(users);
    
}
string to_lower(string str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        str[i] = tolower(str[i]);
        i++;
    }
    return str;
}

int main()
{

    cout << "Hello World !"<< std::endl;
}