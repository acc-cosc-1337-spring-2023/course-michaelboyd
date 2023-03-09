//bank_account.h
//checking_account.h
#include <iostream>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{

friend void show_balance(BankAccount account);

public:
    //constructors
    BankAccount(){get_balance_from_db();} //default constructor
    //set balance constructor
    BankAccount(int balance) : balance(balance){}
    int get_balance() const { return balance; }
    void deposit(int amount);
    void withdraw(int amount);
private:
    int balance{0}; //initialize to 0
    void get_balance_from_db();
};

#endif
