#include <iostream>
#include <string.h>
using namespace std;
class Data
{
public:
    int id;
    char str[100];
    Data(){
        cout << "Constractor Callled..." << endl;
    }
    Data(int i, char s[100])//Parameter Constractor
    {
        id = i;
        strcpy(str, s);
        cout << "Parameter Constractor Callled..." << endl;
    }
    ~Data()//Destructor
    {
        cout<<"code end";
    }
    void dis()
    {
        cout << id << " " << str << endl;
    }
};

int main()
{
    Data d0;
    Data d1(10, "Ashok");
    d1.dis();
    Data d2(20, "pooja");
    d2.dis();
    return 0;
}