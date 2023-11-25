#include <iostream>
using namespace std;
int main()
{

    int a[3][2] = {{2, 3}, {5, 9}, {7, 6}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int b[i][j] = a[j][i];
        }
        cout << endl;
    }




}