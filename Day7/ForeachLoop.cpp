#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name[5] = {"Ashok","Pooja","Harshil","Raju","Kavita"};

    /* size_t size = sizeof(name)/sizeof(name[0]);
    for (int i = 0; i < size; i++) cout<<name[i]<<endl; */
    
    for (string data : name) cout<<data<<endl;
    
    return 0;
}