#include<iostream>
using namespace std;
int main(){




    int n;
    cout<<"enter a number  : ";
    cin>>n;
    int r=0;
    while(n!=0){
        int last_digit = n%10;
        r=(r*10) + last_digit;
        n=n/10;
    }
        cout<<" "<<r;










}