#include <iostream>
using namespace std;
struct Students
{
    int id;
    string name;
    double marks;
};

int main()
{
    struct Students s[3];
    for (auto && i : s)
    {
        cout<<"Enter Your Id = ";
        cin>>i.id;
        cout<<"Enter Your Name For "<<i.id<<"= ";
        cin>>i.name;
        cout<<"Enter Your Marks For "<<i.id<<"= ";
        cin>>i.marks;
    }
    for (auto &&i : s)
    {
        cout<<"Your id is"<<i.id<<endl; 
        cout<<"Your name is"<<i.name<<endl;
        cout<<"Your name is"<<i.marks;
    }
    return 0;
}