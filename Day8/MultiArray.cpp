#include <iostream>
using namespace std;
int main()
{
    int r = 3, c = 3;
    int a[] = {14, 20, 30};
    int m[r][c] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}