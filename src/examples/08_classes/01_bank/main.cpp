#include <iostream>
#include "checking_account.h"
#include <time.h>
#include "atm.h"

using std::cout;

int main()
{

	srand(time(NULL)); //generate true randoms on each main run execution

	CheckingAccount account; //cust1
	// cout<<"Balance: "<<account.get_balance()<<"\n";

	// CheckingAccount account1(100); //cust2
	// cout<<"Balance: "<<account1.get_balance()<<"\n";
	run_menu(account);



	return 0;
}