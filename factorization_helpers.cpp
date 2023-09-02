#include "factorization.h"
#include <iostream>
#include <cmath>
#define LOG(x) std::cout << x << std::endl;

factorize::factorize(double input)
{
    double isDecimal = std::fmod(input, 1.0);

    num = isDecimal == 0 ? (int) input : -1;
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
            return false;
        }
    }

    return true;
}

void factorize::process_factors(int value, std::vector<int>& values)
{
    double newVal = 0;

    // Base case
    if (isPrime((int) value))
    {
        values.push_back((int) value);
        return;
    };

    for (int i = 2; i < 6; i++)
    {
        newVal = (double) value / i;
        if (std::fmod(newVal, 1.0) == 0)
        {
            values.push_back(i);
            break;
        }

    }

    process_factors((int) newVal, values);
}


void factorize::factorization()
{
    bool checkForPrime = isPrime(num);

    if (checkForPrime)
    {
        std::cout << "The prime factor of " << num << " is "
        << num << " because " << num << " is a prime number."
        << std::endl;

        return;
    }

    std::cout << num << " is a composite number." << std::endl;
    process_factors(num, factors);

    std::cout << "The prime factors of " << num << " are: ";

    // Use range based loop
    // This is similar to python's for item in array
    // for value in values:
    // Source for range based loops: https://en.cppreference.com/w/cpp/language/range-for
    for (int value : factors)
    {
        std::cout << value << " ";
    }

    std::cout << ".\n";
}
