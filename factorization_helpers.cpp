#include "factorization.h"
#include <iostream>
#include <cmath>
#define LOG(x) std::cout << x << std::endl;

factorize::factorize(double input)
{
    double isDecimal = std::fmod(input, 1.0);

    if (isDecimal == 0)
    {
        LOG("continue");
    }
    else
    {
        LOG("Stop");
    }
}
