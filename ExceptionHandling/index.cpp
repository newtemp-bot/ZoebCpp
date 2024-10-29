#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter Your a value = ";
    cin>>a;
    cout<<"Enter Your b value = ";
    cin>>b;
    cout<<endl<<"Your a and b are = "<<a<<" / "<<b<<endl;
    
    
    cout<<endl<<"Code is running..."<<endl;
    cout<<endl<<"Code is running..."<<endl;
    cout<<endl<<"Code is running..."<<endl;
    try
    {
        if (b==0)
        {
            throw 505;
        }
        
        c = a / b;
    }
    catch(const exception& e)
    {
        cout << e.what() << '\n';
    }
    catch(...)
    {
        cout<<"Do not div 0";
    }
    cout<<"Ansewer is = "<<c;
    cout<<endl<<"Code is running..."<<endl;
    cout<<endl<<"Code is running..."<<endl;
    cout<<endl<<".....End....";
}