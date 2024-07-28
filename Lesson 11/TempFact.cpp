// define your factorial() function template here

template <int N>
constexpr int factorial()
{
    int product{1};

    for (int i{1}; i <= N; ++i)
        product *= i;



    return product;

}

int main()
{
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>(); // should fail to compile

    return 0;
}
