#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<n<<" ";
            n+=10;
        }
        cout<<endl;
    }
    
}