#include<iostream>
using namespace std;
int main(){

int a,b,c;
cout<<"enter first number : "<<endl;
cin>>a;
cout<<"enter second number : "<<endl;
cin>>b;
cout<<"enter third number : "<<endl;
cin>>c;

if(a>b && a>c)
{
    cout<<a<<"is greatest";
}

else if (b>a && b>c)
{
    cout<<b<<"is greatest";
}
else
{
    cout<<c<<" is greatest";
}





}


