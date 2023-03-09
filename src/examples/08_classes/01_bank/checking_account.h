//checking_account.h
#include <iostream>
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount: public BankAccount
{
public:
    CheckingAccount(){ }; //default constructor must be provided if others are defined
    //C++ will not create the default constructor if other constructors are defined.
    CheckingAccount(int b) : BankAccount(b){} //initialize balance of CheckingAccount
};

#endif
