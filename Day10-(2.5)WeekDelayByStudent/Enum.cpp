#include <iostream>
using namespace std;
enum level
{
    LOW,
    MEDIUM,
    HIGH
};
int main()
{
    enum level myv;
    int c;
    cout<<"Enter Your value between 0-2 = ";
    cin>>c;
    myv = (level)c;
    if (myv==LOW)
    {
        cout<<"Your value is low";
    }
    else if (myv==MEDIUM)
    {
        cout<<"Your value is Mid";
    }
    else if (myv==HIGH)
    {
        cout<<"Your value is High";
    }
}