//****************************************************************
// G.T. Ballesteros
// 05-28-22
// 
// Guessing Game
//****************************************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <stdlib.h>
#include <string>

void startPage();

void pickLevel();

int main()
{
    //Declaring variables
    char pressStart, levelDifficulty;
    std::string playersName;
    int num, guess, i;
    bool guessed = false;

    //Start 
jump1:
    system("CLS");
    startPage();

    //Prompt player to enter the game
    std::left;
    std::cout << std::setw(32) << "Press [X] to start" << '\n';
    std::cout << std::setw(21) << ">> ";
    std::cin >> pressStart;

    switch (pressStart)
    {
    case 'X':
    case 'x':
        std::cout << std::endl;
        std::cout << "==============================================" << '\n';
        system("pause");
        goto jump2;
        break;

    default:
        std::cout << std::endl;
        std::left;
        std::cout << std::setw(30) << "Invalid Input!";
        std::cout << std::endl;
        std::cout << "==============================================" << '\n';
        system("pause");
        goto jump1;
    }

    //Prompt the player's name
jump2:
    system("CLS");
    std::cout << std::endl;
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::left;
    std::cout << std::setw(29) << "Enter your name: ";
    std::getline(std::cin >> std::ws, playersName);
    std::cout << std::endl;
    std::cout << "==============================================" << '\n';
    system("pause");

    //Choose the level of difficulty of the game
jump3:
    system("CLS");
    pickLevel();
    std::cin >> levelDifficulty;
    std::cout << '\n';
    std::cout << "==============================================" << '\n';
    system("pause");

    if (levelDifficulty == 'A' || levelDifficulty == 'a')
        goto jump4;
    else if (levelDifficulty == 'B' || levelDifficulty == 'b')
        goto jump4;
    else if (levelDifficulty == 'C' || levelDifficulty == 'c')
        goto jump4;
    else
        goto jump3;

    //The code of the game will start here and it's a switch statement
jump4:
    system("CLS");
    switch (levelDifficulty)
    {
    case 'A':
    case 'a':
        std::cout << "==============================================" << '\n';
        std::cout << std::endl;
        std::cout << "You have 3 goes to guess the secret number" << '\n';
        std::cout << "HINT: It is a number less than 25!" << '\n';
        std::cout << std::endl;

        srand(time(0));
        num = rand() % 24;

        for (i = 1; i <= 8; i++)
        {
            std::cout << "Enter guess: ";
            std::cin >> guess;

            //Check guess
            if (guess == num)
            {
                guessed = true;
                break;
            }
            else if (guess < num)
                std::cout << "Your guess is lower than the number\n"
                << " Guess Again" << '\n' << std::endl;
            else
                std::cout << "Your guess is higher than the number\n"
                << "Guess Again" << '\n' << std::endl;
        }

        if (guessed)
        {
            goto jump6;
        }
        else
            goto jump5;
        break;
    case 'B':
    case 'b':
        std::cout << "==============================================" << '\n';
        std::cout << std::endl;
        std::cout << "You have 3 goes to guess the secret number" << '\n';
        std::cout << "HINT: It is a number less than 50!" << '\n';
        std::cout << std::endl;

        srand(time(0));
        num = rand() % 49;

        for (i = 1; i <= 7; i++)
        {
            std::cout << "Enter guess: ";
            std::cin >> guess;

            //Check guess
            if (guess == num)
            {
                guessed = true;
                break;
            }
            else if (guess < num)
                std::cout << "Your guess is lower than the number\n"
                << " Guess Again" << std::endl;
            else
                std::cout << "Your guess is higher than the number\n"
                << "Guess Again" << std::endl;
        }

        if (guessed)
        {
            goto jump5;
        }
        else
        {
            goto jump6;
        }
        break;

    case 'C':
    case 'c':
        std::cout << "==============================================" << '\n';
        std::cout << std::endl;
        std::cout << "You have 3 goes to guess the secret number" << '\n';
        std::cout << "HINT: It is a number less than 100!" << '\n';
        std::cout << std::endl;

        srand(time(0));
        num = rand() % 99;

        for (i = 1; i <= 5; i++)
        {
            std::cout << "Enter guess: ";
            std::cin >> guess;

            //Check guess
            if (guess == num)
            {
                guessed = true;
                break;
            }
            else if (guess < num)
                std::cout << "Your guess is lower than the number\n"
                << " Guess Again" << std::endl;
            else
                std::cout << "Your guess is higher than the number\n"
                << "Guess Again" << std::endl;
        }

        if (guessed)
        {
            goto jump5;
        }
        else
        {
            goto jump6;
        }
        break;

    default:
        goto jump3;
    }

jump5:
    system("CLS");
    std::cout << "You Lose";

jump6:
    system("CLS");
    std::cout << "You Win!";

    //the while loop for guessing numbers

    //the for....if statement

    //Results of the game

    //Do you want to play again?


    return 0;
}

void startPage()
{
    std::cout << "==============================================" << '\n';
    std::left;
    std::cout << std::setw(1) << "|";
    std::cout << std::setw(45) << "|" << '\n';
    std::cout << std::setw(1) << "|";
    std::cout << std::setw(33) << "<GUESSING NUMBER GAME>";
    std::cout << std::setw(12) << "|" << '\n';
    std::cout << std::setw(1) << "|";
    std::cout << std::setw(45) << "|" << '\n';
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
}

void pickLevel()
{
    //Choose the level of difficulty of the game
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::left;
    std::cout << std::setw(37) << "Choose the level of difficulty:" << '\n';
    std::cout << std::endl;
    std::cout << std::setw(22) << "[A] Easy" << '\n';
    std::cout << std::setw(25) << "[B] Average" << '\n';
    std::cout << std::setw(22) << "[C] Hard" << '\n';
    std::cout << std::endl;
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::cout << std::setw(21) << ">> ";
}