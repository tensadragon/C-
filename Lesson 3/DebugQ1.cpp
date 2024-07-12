#include <iostream>

int readNumber(int x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x{readNumber(x)};
    int y{readNumber(y)};

    int z{x + y};

	writeAnswer(z);

	return 0;
}
