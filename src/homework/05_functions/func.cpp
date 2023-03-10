#include "func.h"
#include <iostream>
#include <cctype>

using std::cout;
using std::cin;
using std::string;

double get_gc_content(const string &dna)
{
    double gc_content_count = 0;
    for (auto &c : dna)
    {
        if (toupper(c) == 'G' || toupper(c) == 'C')
        {
            gc_content_count++;
        }
    }
    return gc_content_count / dna.length();
}

string get_reverse_string(string dna)
{
    string result;
    for (auto i = dna.length(); i > 0; i--)
    {
        result.push_back(dna[i - 1]);
    }
    return result;
}

string get_dna_compliment(string dna)
{
    string dna_compliment = get_reverse_string(dna);
    for (auto i = 0; i < dna_compliment.length(); i++)
    {
        auto c = toupper(dna_compliment[i]);
        if (c == 'A')
        {
            dna_compliment[i] = 'T';
        }
        else if (c == 'T')
        {
            dna_compliment[i] = 'A';
        }
        else if (c == 'G')
        {
            dna_compliment[i] = 'C';
        }
        else if (c == 'C')
        {
            dna_compliment[i] = 'G';
        }
    }
    return dna_compliment;
}

void display_menu(int &selection) {
    cout<<"\n";
    cout<<"1-Get GC Content"<<"\n";
    cout<<"2-Get DNA Compliment"<<"\n";
	cout<<"3-Exit"<<"\n\n"; 
    cout<<"Enter a selection: ";   
    cin>>selection;
}

bool is_valid_input(string dna) {
    bool is_valid;
    for (auto i = 0; i < dna.length(); i++)
    {
        auto c = toupper(dna[i]);
        if(c == 'C' || c == 'G' || c == 'T' || c == 'A') 
        {
            is_valid = true;
        }
        else 
        {
            is_valid = false;
            break;
        }
    }
    return is_valid;
}