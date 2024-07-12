#include <iostream>


int main()
{
    int count{1};

    while (count <= 20)
    {

        if (count % 5 == 0)
        {
            std::cout << "Joke" << "\n";
        }
        else
        {
            std::cout << count << ' ' << "\n";
        }

        ++count;
    }

    return 0;
}
