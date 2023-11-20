#include<iostream>
using namespace std;
int main(){





    int x =2;
    int y=5;
    cout<<x<<" "<<y<<endl;
   
//    first way 
    // int temp = x;
    // x = y;
    // y = temp;
    // cout<<x<<" "<<y<<endl;

// second way 
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y<<endl;


}