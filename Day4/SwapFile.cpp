#include <iostream>
using namespace std;

int main()
{
    /* With third Varibale */
    /* int a = 10, b = 20, temp;
    cout << "befor swaping value a = " << a << " b = " << b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swaping value a = " << a << " b = " << b; */
    
    /* Without third Varibale */
    int a = 10, b = 20;
    cout << "befor swaping value a = " << a << " b = " << b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swaping value a = " << a << " b = " << b;
    return 0;
}