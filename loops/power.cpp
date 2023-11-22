#include<iostream>
using namespace std;
int main()
{
    
    int base = 5;
    int power=3;
    for(int i=1 ; i<=power ; i++){
        base= base*i;
    }

    cout<<base;

}