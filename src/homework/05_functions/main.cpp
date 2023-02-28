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
    const string ENTER_DNA_PROMPT = "\nEnter a DNA string: ";
    const string INVALID_INPUT_ERROR = "The entered DNA string is not valid.\n";
    do
    {
		display_menu(selection);
        switch (selection)
        {
        case 1:
            cout<<ENTER_DNA_PROMPT;
            cin>>dna;
            if(is_valid_input(dna))
            {
                cout<<"The GC content is "<<get_gc_content(dna)*100<<"%\n";
            }
            else 
            {
                cout<<INVALID_INPUT_ERROR;
            }
            break;
        case 2:
            cout<<ENTER_DNA_PROMPT;
            cin>>dna;
            if(is_valid_input(dna)) 
            {
                cout<<"The DNA compliment is "<<get_dna_compliment(dna)<<"\n";
            }
            else 
            {
                cout<<INVALID_INPUT_ERROR;
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