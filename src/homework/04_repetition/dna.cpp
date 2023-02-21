#include "dna.h"
#include <iostream>

using std::cout;
using std::cin;

int factorial(int num)
{

    // factorial of 0 is 1
    if (num == 0)
    {
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
    while (num1 != num2)
    {
        if (num1 < num2)
        {
            temp = num2;
            num2 = num1;
            num1 = temp;
        }
        else if (num1 > num2)
        {
            num1 = num1 - num2;
        }
    }
    return num1;
}

void display_menu() {
    auto selection = 0;
    auto num =0;
    auto num1 = 0;
    auto num2 = 0;
    std::string exit_option;
    do
    {
        cout<<"\n";
    	cout<<"1-Factorial"<<"\n";
	    cout<<"2-Greatest Common Divisor"<<"\n";
	    cout<<"3-Exit"<<"\n\n"; 
        cout<<"Enter a selection: ";   
        cin>>selection;

        switch (selection)
        {
        case 1:
            cout<<"\nEnter an integer: ";
            cin>>num;
            if(num < 0 || num > 16) 
            {
                cout<<"Please enter a number between 0 and 16 for factorial"<<"\n";
            }
            else 
            {
                cout<<"The factorial is "<<factorial(num)<<"\n";
            }
            break;
        case 2:
            cout<<"\nEnter the first number: ";
            cin>>num1;
            cout<<"Enter the second number: ";
            cin>>num2;
            cout<<"\nThe greatest common divisor is "<<gcd(num1, num2)<<"\n";
            break;
        case 3:
            cout<<"\nAre you sure you want to exit? ";
            cin>>exit_option;
            break;
        default:
            break;
        }
    }
    while(exit_option != "y" && exit_option != "Y");    
}