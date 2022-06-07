#include "add.h"
#include <iostream>
#include <iomanip>

//HEADER start of the Game
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

//HEADER Choose the level of difficulty of the game
void pickLevel()
{
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

//Inside the switch statement
void casHeaderOne()
{
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::cout << "You have 7 goes to guess the secret number" << '\n';
    std::cout << "HINT: It is a number less than 25!" << '\n';
    std::cout << std::endl;
    std::cout << "==============================================" << '\n';
    system("pause");
    system("CLS");
}

void casHeaderTwo()
{
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::cout << "You have 5 goes to guess the secret number" << '\n';
    std::cout << "HINT: It is a number less than 50!" << '\n';
    std::cout << std::endl;
    std::cout << "==============================================" << '\n';
    system("pause");
    system("CLS");
}

void casHeaderThree()
{
    std::cout << "==============================================" << '\n';
    std::cout << std::endl;
    std::cout << "You have 3 goes to guess the secret number" << '\n';
    std::cout << "HINT: It is a number less than 100!" << '\n';
    std::cout << std::endl;
    std::cout << "==============================================" << '\n';
    system("pause");
    system("CLS");
}

//Results of the Game
void win()
{
    system("CLS");
    std::cout << "==============================================" << '\n';
    std::left;
    std::cout << std::setw(1) << "|";
    std::cout << std::setw(45) << "|" << '\n';
    std::cout << std::setw(1) << "|";
    std::cout << std::setw(25) << "YOU WIN";
    std::cout << std::setw(20) << "|" << '\n';
    std::cout << std::setw(1) << "|";
    std::cout << std::setw(45) << "|" << '\n';
    std::cout << "==============================================" << '\n';
}

void lose()
{
    system("CLS");
    std::cout << "==============================================" << '\n';
    std::left;
    std::cout << std::setw(1) << "|";
    std::cout << std::setw(45) << "|" << '\n';
    std::cout << std::setw(1) << "|";
    std::cout << std::setw(25) << "YOU LOSE";
    std::cout << std::setw(20) << "|" << '\n';
    std::cout << std::setw(1) << "|";
    std::cout << std::setw(45) << "|" << '\n';
    std::cout << "==============================================" << '\n';
}