//checking_account.cpp
#include "checking_account.h"
#include <stdlib.h>

void CheckingAccount::get_balance_from_db() {
    balance = rand() % 10000 + 1; //val bw 1 and 10000
}