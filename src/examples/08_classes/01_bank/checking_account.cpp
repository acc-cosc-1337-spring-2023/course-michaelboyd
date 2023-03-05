//checking_account.cpp
#include "checking_account.h"
#include <stdlib.h>

void CheckingAccount::get_balance_from_db() {
    balance = rand() % 10000 + 1; //val bw 1 and 10000
}

void CheckingAccount::deposit(int amount) {
    if(amount > 0) {
        balance += amount;
    }
}

void CheckingAccount::withdraw(int amount) {
    if(amount > 0 && amount <= balance) {
        balance -= amount;
    }
}

//FREE FUNCTIONS; NOT A CLASS FUNCTION
void show_balance(CheckingAccount account) {
    std::cout<<"Friend function: "<<account.balance;
}