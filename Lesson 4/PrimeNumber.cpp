#include <iostream>

int isPrime(int x)
{
    if (x == 1)
    {
        return true;
    }
    else if (x == 3)
    {
        return true;
    }
    else if (x == 5)
    {
        return true;
    }
    else if (x == 7)
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    if (isPrime(x))
    {
        std::cout << "The digit is prime\n";
    }
    else
    {
        std::cout << "The digit is not prime\n";
    }
}
