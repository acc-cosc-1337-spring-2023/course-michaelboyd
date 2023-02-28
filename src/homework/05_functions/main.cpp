#include <iostream>
#include "func.h"

using std::cout;
using std::cin;
using std::string;

int main() 
{
    auto selection = 0;
    string dna;
    string exit_option;
    do
    {
		display_menu(selection);
        switch (selection)
        {
        case 1:
            cout<<"\nEnter a DNA string: ";
            cin>>dna;
            if(is_valid_input(dna))
            {
                cout<<"The GC content is "<<get_gc_content(dna)*100<<"%\n";
            }
            else 
            {
                cout<<"The entered DNA string is not valid.\n";
            }
            break;
        case 2:
            cout<<"\nEnter a DNA string: ";
            cin>>dna;
            if(is_valid_input(dna)) 
            {
                cout<<"The DNA compliment is "<<get_dna_compliment(dna)<<"\n";
            }
            else 
            {
                cout<<"The entered DNA stringis not valid.\n";
            }
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
	return 0;
}