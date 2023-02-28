//checking_account.h
class CheckingAccount
{
public:
    //constructors
    CheckingAccount(){get_balance_from_db();} //default constructor
    //set balance constructor
    CheckingAccount(int balance) : balance(balance){}
    int get_balance() { return balance; }
private:
    int balance{0}; //loads first in memory
    void get_balance_from_db();
};
