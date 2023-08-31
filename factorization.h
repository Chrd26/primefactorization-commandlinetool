#pragma once

class factorize 
{
public:
        // constructor
        factorize(double input);

        // functions
        int getValue();
        void returnFactorization(int* values);
private:
        int num;
        bool isPrime();
};
