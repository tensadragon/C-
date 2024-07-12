#include <iostream>

// Write the function getQuantityPhrase() here
constexpr std::string_view getQuantityPhrase(int apple)
{
    /*
        < 0 = “negative”
        0 = “no”
        1 = “a single”
        2 = “a couple of”
        3 = “a few”
        > 3 = “many”
    */

    if (apple < 0)
        return "negative";
    else if (apple == 0)
        return "no";
    else if (apple == 1)
        return "a single";
    else if (apple == 2)
        return "a couple of";
    else if (apple == 3)
        return "a few";
    else
        return "many";
        

}

// Write the function getApplesPluralized() here

constexpr std::string_view getApplesPluralized(int apple)
{
    /*
        1 = “apple”
        otherwise = “apples”
    */

    if (apple == 1)
        return "apple";
    else
        return "apples";
    
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
