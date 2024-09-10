#include <iostream>
using namespace std;
int main()
{
    //0,1,1,2,3,5
    int n = 10,f1=0,f2=1,sum;
    cout<<f1<<", "<<f2<<", ";
    for (int i = 2; i < n; i++)
    {
        sum=f1+f2;
        cout<<sum<<", ";
        f1=f2;
        f2=sum;
    }
    
    return 0;
}