#pragma once
#include <vector>

class factorize 
{
public:
        // constructor
        // Single argument constructors must be marked
        // explicit to avoid unintentional implicit conversions
        // Source: clion
        explicit factorize(double input);

        // functions
        int getValue();
        void factorization(std::vector<int>& values);

private:
        int num;
        static bool isPrime(int num);
        void process_factors(int value, std::vector<int>& values);
};
