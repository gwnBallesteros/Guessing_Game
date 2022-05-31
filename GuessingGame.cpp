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

//Non-return type functions
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
    //Header
    startHeader();

    //Prompt player to enter the game
    std::left;
    std::cout << std::setw(32) << "Press [X] to start" << '\n';
    std::cout << std::setw(21) << ">> ";
    std::cin >> pressStart;

    //Start of the switch statement
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
    } //End of the switch statement

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

    //Start of the Switch statement
    system("CLS");
    switch (levelDifficulty)
    {
    case 'A':
    case 'a':
        //Header
        casHeaderOne();

        //Statement for generating random numbers
        srand(time(0));
        num = rand() % 24;

        //Start of the for loop
        for (i = 0; i <= 7; i++)
        {
            //Prompt player to enter the guess number
            std::cout << "==============================================" << '\n';
            std::cout << "Enter guess: ";
            std::cin >> guess;
            std::cout << "==============================================" << '\n';

            if (guess == num)
            {
                win();
                std::cout << "Congrats " << playersName << ", you have guessed the right \n"
                    << "number which is, " << num << ".";
                std::cout << "\nNumber of turns you have used: " << i + 1 << '\n' << std::endl;
                system("pause");
                goto jump5;
                break;
            }
            else if (guess < num)
            {
                std::cout << "\nYour guess is lower than the number! \nTurns left: " << 7 - (i + 1);

                if (7 - (i + 1) > 0)
                {
                    std::cout << "\nEnter a number higher than the previous!"
                        << "\n" << std::endl;
                    std::cout << "==============================================" << '\n';
                    system("pause");
                    system("CLS");
                }
            } //End of the for loop
            else if (guess > num)
            {
                std::cout << "\nYour guess is higher than number! \nTurns left: " << 7 - (i + 1);

                if (7 - (i + 1) > 0)
                {
                    std::cout << "\nEnter a number lower than the previous!"
                        << "\n" << std::endl;
                    std::cout << "==============================================" << '\n';
                    system("pause");
                    system("CLS");
                }
            }
            if (i == 6)
            {
                lose();
                std::cout << "Sorry " << playersName << " failed to guess the right number.";
                std::cout << "\nThe right answer is: " << num << '\n' << std::endl;
                system("pause");
                goto jump5;
                break;
            }
        }
        break;

    case 'B':
    case 'b':
        //Header
        casHeaderTwo();

        //Statement for generating random numbers
        srand(time(0));
        num = rand() % 49;

        //Start of the for loop
        for (i = 0; i <= 5; i++)
        {
            //Prompt player to enter the guess number
            std::cout << "==============================================" << '\n';
            std::cout << "Enter guess: ";
            std::cin >> guess;
            std::cout << "==============================================" << '\n';

            if (guess == num)
            {
                win();
                std::cout << "Congrats " << playersName << ", you have guessed the right \n"
                    << "number which is, " << num << ".";
                std::cout << "\nNumber of turns you have used: " << i + 1 << '\n' << std::endl;
                system("pause");
                goto jump5;
                break;
            }
            else if (guess < num)
            {
                std::cout << "\nYour guess is lower than the number, Turns left: " << 5 - (i + 1);

                if (5 - (i + 1) > 0)
                {
                    std::cout << "\nEnter a number higher than the previous!"
                        << "\n" << std::endl;
                    std::cout << "==============================================" << '\n';
                    system("pause");
                    system("CLS");
                }
            }
            else if (guess > num)
            {
                std::cout << "\nYour guess is higher than number, Turns left: " << 5 - (i + 1);

                if (5 - (i + 1) > 0)
                {
                    std::cout << "\nEnter a number lower than the previous!"
                        << "\n" << std::endl;
                    std::cout << "==============================================" << '\n';
                    system("pause");
                    system("CLS");
                }
            } //End of the for loop
            if (i == 4)
            {
                lose();
                std::cout << "Sorry " << playersName << " failed to guess the right number.";
                std::cout << "\nThe right answer is: " << num << '\n' << std::endl;
                system("pause");
                goto jump5;
                break;
            }
        }
        break;

    case 'C':
    case 'c':
        //Header
        casHeaderThree();

        //Statement for generating random numbers
        srand(time(0));
        num = rand() % 100;

        //Start of the for loop
        for (i = 0; i <= 3; i++)
        {
            //Prompt player to enter the guess number
            std::cout << "==============================================" << '\n';
            std::cout << "Enter guess: ";
            std::cin >> guess;
            std::cout << "==============================================" << '\n';

            if (guess == num)
            {
                win();
                std::cout << "Congrats " << playersName << ", you have guessed the right \n"
                    << "number which is, " << num << ".";
                std::cout << "\nNumber of turns you have used: " << i + 1 << '\n' << std::endl;
                system("pause");
                goto jump5;
                break;
            }
            else if (guess < num)
            {
                std::cout << "\nYour guess is lower than the number, Turns left: " << 3 - (i + 1);
                if (3 - (i + 1) > 0)
                {
                    std::cout << "\nEnter a number higher than the previous!"
                        << '\n' << std::endl;
                    std::cout << "==============================================" << '\n';
                    system("pause");
                    system("CLS");
                }
            }
            else if (guess > num)
            {
                std::cout << "\nYour guess is higher than number, Turns left: " << 3 - (i + 1);

                if (3 - (i + 1) > 0)
                {
                    std::cout << "\nEnter a number lower than the previous!"
                        << '\n' << std::endl;
                    std::cout << "==============================================" << '\n';
                    system("pause");
                    system("CLS");
                }
            } //End of the for loop
            if (i == 2)
            {
                lose();
                std::cout << "Sorry " << playersName << " failed to guess the right number.";
                std::cout << "\nThe right answer is: " << num << '\n' << std::endl;
                system("pause");
                goto jump5;
                break;
            }
        }
        break;
    
    default:
        goto jump3;
    } //End of the switch statement

    //Ask the player if they want to play again
jump5:
    system("CLS");
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::left;
    std::cout << std::setw(40) << "Do you want to play again? [Y/N]\n";
    std::cout << std::endl;
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::cout << std::setw(20) << ">> ";
    std::cin >> playAgain;
    std::cout << std::endl;

    //Start of the switch statement
    switch (playAgain)
    {
    case 'Y':
    case 'y':
        goto jump3;
    case 'N':
    case 'n':
        std::cout << "==============================================" << '\n';
        return 0;
    default:
        goto jump5;
    } //End of the Switch statement
 
    return 0;
}

