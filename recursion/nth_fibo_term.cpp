#include<iostream>
using namespace std;

int fibo(int a){
    if(a==1) return 0;
    else if(a==2 || a==3) return 1;
    return fibo(a-1) + fibo(a-2);   //NOTE--> yha else lga bhi sakte ho ya nhi bhi
}


int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    cout<<n<<"th term is "<<fibo(n);

}