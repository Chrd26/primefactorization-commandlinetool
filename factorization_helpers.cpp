#include "factorization.h"
#include <iostream>
#include <cmath>
#define LOG(x) std::cout << x << std::endl;

factorize::factorize(double input)
{
    double isDecimal = std::fmod(input, 1.0);

    num = isDecimal == 0 ? input : -1;
}

int factorize::getValue()
{
    return num;
}

bool factorize::isPrime(int inputVal)
{
    for (int n = 2; n <= 10; n++){
        double calc = inputVal % n;
        if (calc == 0 && n != inputVal)
        {
            std::cout << "return false" << std::endl;
            return false;
        }
    }

    return true;
}

void factorize::process_factors(int value, std::vector<int>& values)
{
    int newVal = 0;

    for (int i = 1; i <= 9; i++)
    {
        if (value % i == 0)
        {
            values.push_back(i);
            newVal = value / i;
        }

        if (isPrime(newVal)) {
            values.push_back(newVal);
            return;
        }
        process_factors(newVal, values);
    }
}


void factorize::factorization(std::vector<int>& values)
{
    bool checkForPrime = isPrime(num);
    values.push_back(1);

    if (checkForPrime)
    {
        values.push_back(num);

        std::cout << "The factors of " << num << " are ";
        // Use range based loop
        // This is similar to python's for item in array
        // for value in values:
        // Source for range based loops: https://en.cppreference.com/w/cpp/language/range-for
        for (int value : values)
        {
             std::cout << value << " ";
        }

        std::cout << "Because " << num << " is a prime number." << std::endl;
    }

    std::cout << num << " is a composite number." << std::endl;
    process_factors(num, values);

    std::cout << "The factors of " << num << " are: " << std::endl;

    for (int value : values)
    {
        std::cout << value << " ";
    }

    std::cout << std::endl;
}
