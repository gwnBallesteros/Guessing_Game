#include <iostream>
#include <iomanip>
#include <string>

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

