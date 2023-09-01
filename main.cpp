#include <cstring>
#include <iostream>
#include "factorization.h"
#include <vector>
#define LOG(x) std::cout << x << std::endl

int main(int argc, char* argv[])
{
    double val = 0;

    // Insteads of allocating memory, use a vector
    // Bjarne Stroustrup suggests to use vector for 
    // dynamic memory allocation. A vector expands as needed.
    // A vector is safer and easier to use than realloc()
    // Source: https://www.stroustrup.com/bs_faq2.html#realloc
    std::vector<int> factors;

    // Make sure that the user is using the tool properly
    if (argc > 2){
        LOG("Too many arguments! Input only an intenger number that you would like to factorize");
        LOG("Example of proper use: ./app 100");
        return 1;
    }else if (argc == 1){
        LOG("You need to input an integer number!");
        LOG("Example of proper use: ./app 100");
        return 1;
    }

    // Ensure that the a number has been entered
    try {
        // From string to integer: 
        // https://stackoverflow.com/questions/7663709/how-can-i-convert-a-stdstring-to-int#7664227
         val = std::stod(argv[1]); 
    } catch (...) { 
        LOG("You did not enter an integer number");
        LOG("Example of proper use: ./app 100");
    }

    // Since prime numbers cannot be 1 or less, 
    // Prime factorization is not possible for numbers that are one or less
    // Source: https://www.mathsisfun.com/prime-factorization.html
    if (val <= 1)
    {
        LOG("Please use a number that is bigger than 1");
    }

    factorize factorize(val);

    if (factorize.getValue() == -1)
    {
        LOG("You did not enter an integer number");
        return 1;
    }

    factorize.returnFactorization(factors);

    std::cin.get();
    return 0;
}
