//bank_account.cpp
//checking_account.cpp
#include "bank_account.h"
#include <stdlib.h>

void BankAccount::get_balance_from_db() {
    balance = rand() % 10000 + 1; //val bw 1 and 10000
}

void BankAccount::deposit(int amount) {
    if(amount > 0) {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount) {
    if(amount > 0 && amount <= balance) {
        balance -= amount;
    }
}

//FREE FUNCTIONS; NOT A CLASS FUNCTION
void show_balance(BankAccount account) {
    std::cout<<"Friend function: "<<account.balance;
}