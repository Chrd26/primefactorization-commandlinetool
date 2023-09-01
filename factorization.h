#pragma once
#include <vector>

class factorize 
{
public:
        // constructor
        factorize(double input);

        // functions
        int getValue();
        void returnFactorization(std::vector<int> values);
private:
        int num;
        bool isPrime();
};
