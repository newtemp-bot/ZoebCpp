#include <iostream>
using namespace std;
class Ex2
{
public:
    int a, b;
    Ex2()
    {

    }
    Ex2(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Ex2 operator+(Ex2 const& e)
    {
        Ex2 res;
        res.a = a + e.a;
        res.b = b + e.b;
        return res;
    }
    void print() { cout << "a = " << a << " b =" << b << '\n'; }
};
int main()
{
    Ex2 c1(10, 5), c2(2, 4);
    Ex2 c3 = c1 + c2;
    c3.print();

    return 0;
}