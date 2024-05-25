#include <iostream>
#include "gameplay.cpp"
using namespace std;

void capitaliseName(char* name, int i)
{
    if(name[i] == '\0')
    {
        return;
    }

    name[i] = name[i] - 32;
    capitaliseName(name, i+1);
}

int main()
{
    system("cls");
    cout << "\033[0;0m";

    /* Creating player profiles. */
    User* Player = new User();
    User* CPU = new User();

    /* Get user name. */
    askForName();
    char* name = new char[20];
    cin >> name;
    capitaliseName(name, 0);

    Player->setName(name); //setting username

    strcpy(name, "CPU");
    CPU->setName(name);

    delete[]name;

    displayWelcomeScreen(); //display welcome screen

    Player->resetScore(); //set player and cpu scores to zero
    CPU->resetScore();
    
    playGame(*Player, *CPU); //play the game

    newgame:
    system("cls");

    displayNewGameMessage(); //ask for a new game
    char ch;

    input:
    try //verify input
    {
        cin >> ch;
    }
    catch(const std::exception& e)
    {
        //std::cerr << e.what() << '\n';
        cout << "Invalid Input. Please try again." << endl;
        goto input;
    }
    
    ch = toupper(ch);

    if(ch == 'Y')
    {
        Player->resetScore();
        CPU->resetScore();

        playGame(*Player, *CPU); //restart game
        goto newgame;
    }
    else if(ch == 'N')
    {
        Player->~User(); //delete player profiles
        CPU->~User();
        displayGameTerminateMessage(); //display byebye
    }
    else
    {
        cout << "Invalid Input. Please try again." << endl;
        goto input;
    }
}