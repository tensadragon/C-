// Make sure that assert triggers even if we compile in release mode
#undef NDEBUG

#include <cassert> // for assert
#include <iostream>

/*
Review: A prime number is a natural number greater than 1 and is only divisible by itself and 1
If there are more than 2 factors for a number, it is a composite number (i.e. not a prime)



*/

bool isPrime(int x)
{
    if (x <= 1) // the value inserted must be greater than 1, otherwise, have it return false
        return false;
    if (x == 2) // 2 is also a prime number so, it must return true
        return true;
    if (x % 2 == 0) // any other even number, it is a composite number, ergo, return as false
        return false;

    // NOW, for any other values like 3 or higher, test the odd values
    // 3 and sqrt(x) to see if they are a divisor
    // Because i >= 0 and x >= 0, the test can be optimized to simply i*i < 0 from i < std::sqrt(x)
    for (int i{3}; i*i <= x; i+=2)
    {
        if (x % i == 0) // if x is evenly divisible, return false
            return false;
    }

    // if there are no other divisors, return true
    return true;

}

int main()
{
    assert(!isPrime(0)); // terminate program if isPrime(0) is true
    assert(!isPrime(1));
    assert(isPrime(2));  // terminate program if isPrime(2) is false
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}
