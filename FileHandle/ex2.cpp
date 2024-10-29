#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    string str;
    ifstream f("test.txt");
    while (getline(f,str))
    {
        cout<<str<<endl;
    }
    f.close();
}