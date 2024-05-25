#include "userPrompts.cpp"
#include "userProfile.cpp"
#include "printWizard.cpp"
#include <random>
#include <conio.h>
#include <time.h>

void playGame(User& Player, User& CPU)
{
    if(Player.getScore() == 5 || CPU.getScore() == 5)
    {
        displayGameWinnerMessage((Player.getScore() > CPU.getScore())? Player.getName() : CPU.getName(), abs(Player.getScore() - CPU.getScore()));

        cout << endl << "Press any key to proceed." << endl;
        fflush(stdin);
        getch();
        return;
    }

    askForInput(); 
    
    //ask for input from user
    char userChoice;

    input:
    try //eliminate input type mismatch   ERROR might work test once
    {
        cin >> userChoice;
    }
    catch(const std::exception& e)
    {
        //std::cerr << e.what() << '\n';
        cout << "Invalid Input. Please enter again." << endl;
        fflush(stdin);
        goto input;
    }
    fflush(stdin);
    userChoice = toupper(userChoice);
    int cpuChoice;
    system("cls");
    
    if(userChoice == 'R' || userChoice == 'P' || userChoice == 'S')
    {

        srand(time(NULL));
        cpuChoice = rand() % 3;

        //cout << userChoice << cpuChoice << endl;

        if((userChoice == 'R' && cpuChoice == 0) || (userChoice == 'P' && cpuChoice == 1) || (userChoice == 'S' && cpuChoice == 2)) //tie case
        {
            if(userChoice == 'R' && cpuChoice == 0)
                printRockVsRock();
            else if(userChoice == 'P' && cpuChoice == 1)
                printPaperVsPaper();
            else if(userChoice == 'S' && cpuChoice == 2)
                printScissorVsScissor();

            displayTieMessage();
        }
        else if((userChoice == 'R' && cpuChoice == 1) || (userChoice == 'P' && cpuChoice == 2) || (userChoice == 'S' && cpuChoice == 0)) //lose case
        {
            if(userChoice == 'R' && cpuChoice == 1)
                printRockVsPaper();
            else if(userChoice == 'P' && cpuChoice == 2)
            {
                printPaperVsScissor();
            }
            else if(userChoice == 'S' && cpuChoice == 0)
                printScissorVsRock();

            CPU.increaseScore();
            displayRoundWinnerMessage(CPU.getName(), Player.getScore(), CPU.getScore());
        }
        else
        {
            if(userChoice == 'R' && cpuChoice == 2)
                printRockVsScissor();
            else if(userChoice == 'P' && cpuChoice == 0)
                printPaperVsRock();
            else if(userChoice == 'S' && cpuChoice == 1)
                printScissorVsPaper();
            
            Player.increaseScore();
            displayRoundWinnerMessage(Player.getName(), Player.getScore(), CPU.getScore());
        }
    }
    else
    {
        cout << "Invalid Input. Please enter again." << endl;
        goto input;
    }
    playGame(Player, CPU);
}