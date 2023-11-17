#include<iostream>
using namespace std;
int main(){



int n;
cout<<"enter a number : ";
cin>>n;


// first way 
// first way 
// first way 
// first way 


// bool check=false;
// for(int i = 2 ; i<=(n-1) ; i++)
// {
//     if(n%i == 0 ) check=true;
    
// }
// if(n==1) cout<<"none of them";
// else if(check) cout<<"composit enumber";
// else  cout<<"prime number";


// second way 
// second way 
// second way 
// second way 

for(int i = 2; i<=n/2 ; i++)
{
    if(n%i==0) cout<<"composite";
    break;
}




}