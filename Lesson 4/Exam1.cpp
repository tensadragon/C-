#include <iostream>

double numInput()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;

    return x;
}

char symbolInput()
{
    std::cout << "Enter +, -, *, or /: ";
    char x{};
    std::cin >> x;

    if (x == '+')
        return x;
    else if (x == '-')
        return x;
    else if (x == '*')
        return x;
    else if (x == '/')
        return x;
    else
        EXIT_FAILURE;
    
    return x;
}

void solveMathProblem()
{
    double x{numInput()};
    double y{numInput()};

    char z{symbolInput()};

    if (z == '+')
    {
        std::cout << x << " " <<  z << " " << y << " is " << x+y << "\n";
    }
    else if (z == '-')
    {
        std::cout << x << " " <<  z << " " << y << " is " << x-y << "\n";
    }
    else if (z == '*')
    {
        std::cout << x << " " <<  z << " " << y << " is " << x*y << "\n";
    }
    else if (z == '/')
    {
        std::cout << x << " " <<  z << " " << y << " is " << x/y << "\n";
    }
    

}

int main()
{   
    solveMathProblem();

    return 0;
}
