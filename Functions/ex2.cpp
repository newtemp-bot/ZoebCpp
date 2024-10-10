#include <iostream>
using namespace std;
void display(int x,int y)
{
    cout<<"Your Sum is ("<<x<<" + "<<y<<") = "<<(x+y)<<endl;
}
int main()
{
    display(40,20);
    display(40,50);
    display(20,20);
    return 0;
}