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

    switch(x)
    {
        case '+':
        case '-':
        case '*':
        case '/':
            return x;
        default:
            std::cout << "Error: please choose a valid mathematical operator \n";
            return 0;
    }

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
