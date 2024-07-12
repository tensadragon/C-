#include <iostream>

int getX()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    return x;
}

int getY()
{
    std::cout << "Enter a larger integer: ";
    int y{};
    std::cin >> y;

    return y;
}

void compareTwoValues(int x, int y)
{
    if (x > y)
    {
        std::cout << "Swapping the values\n";
        int temp{x};

        x = y;
        y = temp;
        
        std::cout << "The smaller value is " << x << "\n";
        std::cout << "The larger value is " << y << "\n";
    }
    else
    {
        std::cout << "The smaller value is " << x << "\n";
        std::cout << "The larger value is " << y << "\n";
    }
}

int main()
{
    int x{getX()};
    int y{getY()};

    compareTwoValues(x, y);

    return 0;
}
