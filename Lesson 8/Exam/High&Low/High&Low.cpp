#include <iostream>
#include "Random.h"

int guessNumber()
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
    int number{};

    int rightNumber{Random::get(1, 100)};

    for (int guess{1}; guess <= 7; ++guess)
    {
        std::cout << "Guess #" << guess << ":   ";
        std::cin >> number;

        if (number < rightNumber)
            std::cout << "Your guess is too low.\n";
        if (number > rightNumber)
            std::cout << "Your guess is too high.\n";
        if (number == rightNumber)
        {
            std::cout << "Correct! YOU ARE WINNER!\n";
            break;
        }
        if ((guess == 7) && number != rightNumber)
        {
            std::cout << "YOU ARE LOSE! THE RIGHT NUMBER IS " << rightNumber << ". GOOD DAY SIR!\n";
            break;
        }
    }

    return number;
}

void runGame()
{
    bool running = true;

    while (running)
    {
        guessNumber();

        

    }

}

int main()
{
    runGame();

    return 0;
}
