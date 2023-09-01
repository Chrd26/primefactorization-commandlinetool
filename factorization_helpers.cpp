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

bool factorize::isPrime(int inputVal)
{
    bool isPrime = false;

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
    LOG("Do something");

    for (int i = 1; i <= 9; i++)
    {
        if (value % i == 0)
        {
            values.push_back(i);
            newVal = value / i;
        }

        if (isPrime(newVal))
        {
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
        for (int i = 0; i < values.size(); i++)
        {
             std::cout << values[i] << " ";
        }

        std::cout << "Because " << num << " is a prime number." << std::endl;
    }

    std::cout << num << " is a composite number." << std::endl;
}
