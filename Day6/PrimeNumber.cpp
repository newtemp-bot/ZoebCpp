#include <iostream>
using namespace std;
int main()
{
    int n = 88, flag = 1;
    if (n == 0 || n == 1)
        flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            flag = 0;
        else
            break;
    }
    if (flag)
        printf("It is prime");
    else
        printf("Not prime");

    return 0;
}
