#include <iostream>
#include "Random.h"

int guessNumber()
{
    while (true)
    {
        int number{};
        std::cin >> number;

        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (number < 1 || number > 100)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return number;
    }

}

void runGame()
{
    bool running = true;
    bool running2 = true;

    while (running)
    {
        std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";

        int rightNumber{Random::get(1, 100)};

        for (int guess{1}; guess <= 7; ++guess)
        {
            std::cout << "Guess #" << guess << ":   ";
            int number{guessNumber()};

            if (number < rightNumber)
                std::cout << "Your guess is too low.\n";
            if (number > rightNumber)
                std::cout << "Your guess is too high.\n";
            if (number == rightNumber)
            {
                std::cout << "Correct! YOU ARE WINNER! THE RIGHT NUMBER IS " << rightNumber << ". GOOD DAY SIR!\n";
                break;
            }
            if ((guess == 7) && number != rightNumber)
            {
                std::cout << "YOU ARE LOSE! THE RIGHT NUMBER IS " << rightNumber << ". GOOD DAY SIR!\n";
                break;
            }
        }

        while (running2)
        {
            std::cout << "Would you like to play again (y/n)\n";

            char input{};
            std::cin >> input;

            if (input == 'y')
                break;
            if (input == 'n')
            {
                running = false;
                break;
            }
            else
            {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Try Again, DONKEY!\n";
            }
        }

    }

}

int main()
{
    runGame();

    return 0;
}
