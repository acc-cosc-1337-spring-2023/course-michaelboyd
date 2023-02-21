#include <iostream>

using std::cout;
using std::string;

int main()
{

    auto num = 5;
    
    string lang = "C++";

    cout<<"Address of lang : "<<&lang<<"\n";

    cout<<lang[0]<<"\n";

    auto &ref = lang[0];

    cout<<&lang[0]<<"\n";

    cout<<&ref<<"\n"; //cannot get address of a character

    cout<<"Size is: "<<lang.size()<<"\n";

    cout<<"Capacity: "<<lang.capacity()<<"\n";

    //create strings

    string s0("initial string");
    cout<<s0<<"\n";

    string s1; //empty string -  15 capacity is allocated

    s1.append("string is 15 ch");
    






    return 0;
}