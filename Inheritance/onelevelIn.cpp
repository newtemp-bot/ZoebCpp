#include <iostream>
using namespace std;
class Car
{   
    public:
        void run()
        {
            cout<<"Car is running...";
        }
};
class BMW : public Car{//this is the single Inheritance
    public:
        void featuers()
        {
            cout<<"BMW have good lights...";
        }
};
class S24 : public BMW{//this is the Multilevle Inheritance

};

int main()
{
    Car c;
    BMW b;
    b.featuers();
    b.run();
    c.run();
    S24 s;
    s.run();
    s.featuers();
    return 0;
}