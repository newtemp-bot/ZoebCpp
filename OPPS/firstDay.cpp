#include <iostream>
using namespace std;
class Car{
    public:
    int id = 120;
    void whatistheCarNumber()
    {
        cout<<id;
    }
};
int main()
{
    Car obj;
    obj.whatistheCarNumber();
    return 0;
}