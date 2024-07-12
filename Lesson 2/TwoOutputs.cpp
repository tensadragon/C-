#include <iostream>

int getNumInput()
{
    int num{};
    std::cout << "Enter a number: ";

    std::cin >> num;

    return num; 

}

void printDouble(int value)
{
    std::cout << value << " + " << value << " is " << value+value << "\n";
}

int main()
{
    printDouble(getNumInput());


    return 0;
}
