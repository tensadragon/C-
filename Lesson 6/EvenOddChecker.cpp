#include <iostream>
#include <math.h>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;

    return num;
}

constexpr bool isEven(int num)
{
    /*
    if ((num % 2) == 0)
        return true;
    else
        return false;
    */
   // The above also works but is more complicated

   return (num % 2) == 0;
    
}

void printResult(int num)
{
    bool result{isEven(num)};

    if (result == true)
        std::cout << num << " is even\n";
    else
        std::cout << num << " is odd\n";
}

int main()
{

    int num{getInteger()};

    printResult(num);

    return 0;
}
