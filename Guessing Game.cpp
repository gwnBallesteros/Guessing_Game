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
    if (playAgain == 'Y' || playAgain == 'y')
        goto jump3;
    else if (playAgain == 'N' || playAgain == 'n')
        return 0;
    else
        goto jump5;

    return 0;
}

void startHeader()
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

void casHeaderOne()
{
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::cout << "You have 7 goes to guess the secret number" << '\n';
    std::cout << "HINT: It is a number less than 25!" << '\n';
    std::cout << std::endl;
}

void casHeaderTwo()
{
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::cout << "You have 5 goes to guess the secret number" << '\n';
    std::cout << "HINT: It is a number less than 50!" << '\n';
    std::cout << std::endl;
}

void casHeaderThree()
{
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::cout << "You have 3 goes to guess the secret number" << '\n';
    std::cout << "HINT: It is a number less than 100!" << '\n';
    std::cout << std::endl;
}

void win()
{
    system("CLS");
    std::cout << "You Win!!";
    std::cout << std::endl;
    system("pause");
}

void lose()
{
    system("CLS");
    std::cout << "You Lose";
    std::cout << std::endl;
    system("pause");
}
