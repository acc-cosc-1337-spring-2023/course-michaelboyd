//atm.cpp
#include "atm.h"

using std::cout;
using std::cin;

void display_menu() {
    cout<<"\n\nACC COSC Bank\n\n";
    cout<<"1-Deposit\n";
    cout<<"2-Withdraw\n";
    cout<<"3-Balance\n";
    cout<<"4-Exit\n";
}

void run_menu(BankAccount& account) {
    auto option = 0;
    do
    {
        display_menu();
        cout<<"Enter menu option: ";
        cin>>option;
        handle_menu_option(option, account);
    } while (option != 4);
}

void handle_menu_option(int option, BankAccount& account) {

    auto amount = 0;

    switch (option)
    {
    case 1:
        cout<<"Enter deposit amount: ";
        cin>>amount;
        account.deposit(amount);
        break;
    case 2:
        cout<<"Enter withdrawal amount: ";
        cin>>amount;
        account.withdraw(amount);
        break;
    case 3:
        cout<<"The balance is: "<<account.get_balance();
        break;
    case 4:
        cout<<"Enter deposit amount: ";
        cin>>amount;
        account.deposit(amount);
        break;

    default:
        break;
    }

}