#include <iostream>

int get_value_by_input()
{
    int x{};

    std::cout << "Enter an integer: ";
    std::cin >> x;

    return x;
}

int main()
{

    int num{get_value_by_input()};

    std::cout << num << " doubled is: " << num*2 << "\n";


    return 0;
}
