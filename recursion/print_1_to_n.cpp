#include <iostream>
using namespace std;

void print(int a, int b)
{
    if (a > b)  return;
    cout << a << endl;
    print(a+1,b);
}

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    print(1, n);
}