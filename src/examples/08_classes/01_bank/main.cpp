#include <iostream>
#include "checking_account.h"
#include <time.h>
#include "atm.h"
#include "savings_account.h"

using std::cout;
using std::cin;

int main()
{

	srand(time(NULL)); //generate true randoms on each main run execution
	SavingsAccount savings;


	CheckingAccount account; //cust1
	// cout<<"Balance: "<<account.get_balance()<<"\n";

	// CheckingAccount account1(100); //cust2
	// cout<<"Balance: "<<account1.get_balance()<<"\n";

	auto choice = 's';

	cout<<"Checking or Savings?\n";
	cin>>choice;

	if(choice == 'c')
	run_menu(account);
	else
	run_menu(savings);



	return 0;
}