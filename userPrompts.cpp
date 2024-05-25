#include <iostream>
using namespace std;

void askForName()
{
    cout << "Please enter your name." << endl;
}

void displayWelcomeScreen()
{
    system("cls");
    cout << "Welcome to Rock, Paper, Scissors." << endl;
    cout << endl << "In order to play this game, please use your keyboard. First to reach 5 points wins." << endl;
}

void askForInput()
{
    cout << "---------------------------------------" << endl;
    cout << "Press R to use Rock, P to use Paper, and S to use Scissors." << endl;
}

void displayRoundWinnerMessage(const string winner, const int userScore, const int cpuScore)
{
    if(winner == "CPU")
        cout << "\033[31m";
    else
        cout << "\033[32m";

    cout << winner << " wins!\033[0m" << endl << endl;
    cout << "Your Score = " << userScore << "." << endl;
    cout << "CPU Score = " << cpuScore << "." << endl;
    cout << "---------------------------------------" << endl;
}

void displayTieMessage()
{
    cout << "\033[34mNobody wins this round.\033[0m" << endl;
    cout << "---------------------------------------" << endl;
}

void displayGameWinnerMessage(const string name, const int scoreDifference)
{
    if(name == "CPU")
        cout << "\033[37,41m";
    else
        cout << "\033[30;42m";

    cout << name << " wins by " << scoreDifference << " points!!!\033[0m" << endl;
    cout << "---------------------------------------" << endl;
}

void displayNewGameMessage()
{
    cout << "Would you like to play another round? (Y/N)" << endl;
}

void displayGameTerminateMessage()
{
    system("cls");
    cout << "Thanks for playing Rock, Paper, Scissors with us!!" << endl << endl;
}