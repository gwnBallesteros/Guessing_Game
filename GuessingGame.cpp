//****************************************************************
// G.T. Ballesteros
// 05-28-22
// 
// Guessing Game
//****************************************************************

#include "add.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <stdlib.h>
#include <string>

void startHeader();

void pickLevel();

void casHeaderOne();

void casHeaderTwo();

void casHeaderThree();

void win();

void lose();

int main()
{
    //Declaring variables
    char pressStart, levelDifficulty;
    char playAgain;
    std::string playersName;
    int num, guess, i;

    //Start 
jump1:
    system("CLS");
    startHeader();

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

    system("CLS");
    switch (levelDifficulty)
    {
    case 'A':
    case 'a':
        casHeaderOne();
        srand(time(0));
        num = rand() % 24;

        for (i = 0; i <= 7; i++)
        {
            std::cout << "Enter guess: ";
            std::cin >> guess;

            if (guess == num)
            {
                std::cout << "\nCongrats, you have guessed the right number which is, " << num;
                std::cout << "\nNumber of turns you have used: " << i + 1 << '\n' << std::endl;
                system("pause");
                win();
                goto jump5;
                break;
            }
            else if (guess < num)
            {
                std::cout << "\nYour guess is lower than the number, Turns left: " << 7 - (i + 1)
                    << "\n";
                if (7 - (i + 1) > 0)
                {
                    std::cout << "\nTry again, entering a number higher than previous!"
                        << "\n" << std::endl;
                }
            }
            else if (guess > num)
            {
                std::cout << "\nYour guess is higher than number, Turns left: " << 7 - (i + 1)
                    << "\n";
                if (7 - (i + 1) > 0)
                {
                    std::cout << "\nTry again, entering a number lower than previous! "
                        << "\n" << std::endl;
                }
            }
            if (i == 6)
            {
                
                std::cout << "\n\nSorry, you failed to guess the right number.";
                std::cout << "\nThe right answer is: " << num << '\n' << std::endl;
                system("pause");
                lose();
                goto jump5;
                break;
            }
        }
        break;

    case 'B':
    case 'b':
        casHeaderTwo();
        srand(time(0));
        num = rand() % 49;

        for (i = 0; i <= 5; i++)
        {
            std::cout << "Enter guess: ";
            std::cin >> guess;

            if (guess == num)
            {
                std::cout << "\nCongrats, you have guessed the right number which is, " << num;
                std::cout << "\nNumber of turns you have used: " << i + 1 << '\n' << std::endl;
                system("pause");
                win();
                goto jump5;
                break;
            }
            else if (guess < num)
            {
                std::cout << "\nYour guess is lower than the number, Turns left: " << 5 - (i + 1)
                    << "\n";
                if (5 - (i + 1) > 0)
                {
                    std::cout << "\nTry again, entering a number higher than previous!"
                        << "\n" << std::endl;
                }
            }
            else if (guess > num)
            {
                std::cout << "\nYour guess is higher than number, Turns left: " << 5 - (i + 1)
                    << "\n";
                if (5 - (i + 1) > 0)
                {
                    std::cout << "\nTry again, entering a number lower than previous! "
                        << "\n" << std::endl;
                }
            }
            if (i == 4)
            {

                std::cout << "\n\nSorry, you failed to guess the right number.";
                std::cout << "\nThe right answer is: " << num << '\n' << std::endl;
                system("pause");
                lose();
                goto jump5;
                break;
            }
        }
        break;

    case 'C':
    case 'c':
        casHeaderThree();
        srand(time(0));
        num = rand() % 100;

        for (i = 0; i <= 3; i++)
        {
            std::cout << "Enter guess: ";
            std::cin >> guess;

            if (guess == num)
            {
                std::cout << "\nCongrats, you have guessed the right number which is, " << num;
                std::cout << "\nNumber of turns you have used: " << i + 1 << '\n' << std::endl;
                system("pause");
                win();
                goto jump5;
                break;
            }
            else if (guess < num)
            {
                std::cout << "\nYour guess is lower than the number, Turns left: " << 3 - (i + 1)
                    << "\n";
                if (3 - (i + 1) > 0)
                {
                    std::cout << "\nTry again, entering a number higher than previous!"
                        << "\n" << std::endl;
                }
            }
            else if (guess > num)
            {
                std::cout << "\nYour guess is higher than number, Turns left: " << 3 - (i + 1)
                    << "\n";
                if (3 - (i + 1) > 0)
                {
                    std::cout << "\nTry again, entering a number lower than previous! "
                        << "\n" << std::endl;
                }
            }
            if (i == 2)
            {

                std::cout << "\n\nSorry, you failed to guess the right number.";
                std::cout << "\nThe right answer is: " << num << '\n' << std::endl;
                system("pause");
                lose();
                goto jump5;
                break;
            }
        }
        break;
    
    default:
        goto jump3;
    }

jump5:
    system("CLS");
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::cout << "Do you want to play again? [Y/N]\n";
    std::cout << ">> ";
    std::cin >> playAgain;
    std::cout << std::endl;
    switch (playAgain)
    {
    case 'Y':
    case 'y':
        goto jump3;
    case 'N':
    case 'n':
        std::cout << std::endl;
        std::cout << "==============================================" << '\n';
        return 0;
    default:
        goto jump5;
    }
 
    return 0;
}

