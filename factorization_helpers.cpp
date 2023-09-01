#include "factorization.h"
#include <iostream>
#include <cmath>
#define LOG(x) std::cout << x << std::endl;
    
// Insteads of allocating memory, use a vector
// Bjarne Stroustrup suggests to use vector for 
// dynamic memory allocation. A vector expands as needed
// A vector is safer and easier to use than realloc()
// Source: https://www.stroustrup.com/bs_faq2.html#realloc


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
        if (calc == 0 && n != num)
        {
            std::cout << "return false" << std::endl;
            return false;
        }
    }

    return true;
}


void factorize::returnFactorization(std::vector<int> values)
{
    bool checkForPrime = isPrime();
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
