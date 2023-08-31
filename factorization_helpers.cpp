#include "factorization.h"
#include <iostream>
#include <cmath>
#define LOG(x) std::cout << x << std::endl;

factorize::factorize(double input)
{
    double isDecimal = std::fmod(input, 1.0);

    if (isDecimal == 0)
    {
        num = input;
    }
    else
    {
        num = -1;
    }
}

int factorize::getValue()
{
    return num;
}

bool factorize::isPrime()
{
    bool isPrime = false;

    for (int n = 2; n <= 10; n++){
        // LOG(n);
        double calc = num % n;
        if (calc == 0)
        {
            // std::cout << "return false" << std::endl;
            return false;
        }
    }

    return true;
}


void factorize::returnFactorization(int* values)
{
    bool checkForPrime = isPrime();

    if (checkForPrime)
    {
        *(values + 1) = num;

        std::cout << "The factors of " << num << " are ";
        for (int i = 0; *(values + i) != '\0'; i++)
        {
             std::cout << *(values + i) << " ";
        }

        std::cout << "Because " << num << " is a prime number." << std::endl;
    }

    std::cout << num << " is a composite number." << std::endl;
}
