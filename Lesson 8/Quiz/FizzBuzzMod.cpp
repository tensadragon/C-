#include <iostream>
/*
Modify the FizzBuzz program you wrote in the previous quiz to add the rule that numbers divisible 
by seven should be replaced with “pop”. Run the program for 150 iterations.

In this version, using an if/else chain to explicitly cover 
every possible combination of words will result in a function that is too long. 
Optimize your function so only 4 if-statements are used: one for each of the non-compound words (“fizz”, “buzz”, “pop”), 
and one for the case where a number is printed.


Hint: Use a boolean variable to keep track of whether a number has matched one of the conditions.
*/

void fizzbuzz(int value)
{
    for(int i{1}; i <= value; ++i)
    {
        bool printed{false};
        if (i % 7 == 0)
        {
            std::cout << "pop";
            printed = true;
        }
        if (i % 3 == 0)
        {
            std::cout << "fizz";
            printed = true;
        }
        if (i % 5 == 0)
        {
            std::cout << "buzz";
            printed = true;
        }
        if (!printed)
            std::cout << i;

        std::cout << "\n";
    }
}

int main()
{
    fizzbuzz(150);

    return 0;
}
