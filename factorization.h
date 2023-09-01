#pragma once
#include <vector>

class factorize 
{
public:
        // constructor
        factorize(double input);

        // functions
        int getValue();
        void factorization(std::vector<int>& values);

private:
        int num;
        bool isPrime(int num);
        void process_factors(int value, std::vector<int>& values);
};
