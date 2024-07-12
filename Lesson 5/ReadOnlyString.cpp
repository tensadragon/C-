#include <iostream>
#include <string_view>

void printSV(std::string_view str)
{
    std::cout << str << "\n";
}

int main()
{
    std::string_view s{"Hello, world!"};

    printSV(s);

    return 0;
}
