#include<iostream>
using namespace std;
int main(){


int n;
cout<<"enter n : ";
cin>>n;
int r ; 
cout<<"enter r :";
cin>>r;


int a = 1;
for(int i=1; i<=n  ; i++){
    a=a*i;
}

cout<<a<<endl;




int b=1;
for(int i=1; i<=r ; i++){
    b=b*i;
}

cout<<b<<endl;


int c=1;
for(int i=1; i<=(n-r) ; i++){
    c=c*i;
}

cout<<c<<endl;


cout<<"permutation is : "<<a/c<<endl  ;
cout<<"combination is : "<<a/(b*c)<<endl;















}