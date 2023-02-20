#include "dna.h"

int factorial(int num)
{
    int factorial = num;

    if (num == 0 || num == 1)
    {
        return 1;
    }

    while (num > 1)
    {
        factorial = factorial * (num - 1);
        num--;
    }
    
    return factorial;
}

int gcd(int num1, int num2)
{
    return 0;
}