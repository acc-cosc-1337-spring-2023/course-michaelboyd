#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{

    //auto num = 5;
    
    string lang = "C++";

    int num = 5;

    cout<<"Address of lang : "<<&lang<<"\n";
    cout<<"Address of num: "<<&num<<"\n";
    cout<<lang[0]<<"\n";

    cout<<"Address of character at 0 index: "<<static_cast<void *>(&lang[0])<<"\n";
    cout<<"Address of character at 1 index: "<<static_cast<void *>(&lang[1])<<"\n";
    cout<<"Address of character at 2 index: "<<static_cast<void *>(&lang[2])<<"\n";

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