#include "dna.h"

int factorial(int num)
{
    int factorial = num;

    if (num == 0 || num == 1)
    {
        return 1;
    }

    num--; // initialize num by decrementing by 1

    while (num > 0)
    {
        factorial = factorial * (num);
        num--;
    }

    return factorial;
}

int gcd(int num1, int num2)
{
    return 0;
}