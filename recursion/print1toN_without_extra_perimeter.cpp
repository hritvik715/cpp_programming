#include <iostream>
using namespace std;

void print(int a)
{
    if (a > b)  return;
    cout << a << endl;
    print(a+1);
}

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    print(1, n);
}