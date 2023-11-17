#include<iostream>
using namespace std;
int main(){


int a;
cout<<"enter first number :";
cin>>a;


int b;
cout<<"enter second number ";
cin>>b;


char op;
cout<<"enter the opeartion :";
cin>>op;


switch(op)
{
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    default:
        cout<<"invalid opeartor";
}




}