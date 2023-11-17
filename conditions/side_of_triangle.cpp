#include<iostream>
using namespace std;
int main(){


int a,b,c;
cout<<"enter three sides of triangle : "<<endl;
cin>>a;
cin>>b;
cin>>c;

if((a+b)>c && (b+c)>a && (c+a)>b){
    cout<<">>valid triangle";
}

else cout<<"invalid triangle";







}