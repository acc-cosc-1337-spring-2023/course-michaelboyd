#include "dna.h"

int factorial(int num)
{

    //factorial of 0 is 1
    if(num == 0) {
        num = 1;
    }
    
    int factorial = num;

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
    int temp = 0;
    while(num1 != num2) {
        if(num1 < num2) {
            temp = num2;
            num2 = num1;
            num1 = temp;
        }
        else if(num1 > num2) {
            num1 = num1 - num2;
        }
    }
    return num1;
}