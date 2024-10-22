#include <iostream>
using namespace std;
class OPOverload
{
    public:
        void dis()
        {
            cout<<"Parent Class method";
        }
};
class Child : public OPOverload
{
    public:
        void dis()
        {
            cout<<"Child Class method";
        }
};

int main()
{
    Child c;
    c.dis();
}