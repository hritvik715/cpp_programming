#include<iostream>
using namespace std;

int fact(int x)
{
    int f=1;
    for(int i= 1; i<=x ; i++)
    {
        f=f*i;
    }
    return f;
}


int main(){
int n;
cout<<"enter n : ";
cin>>n;
int r ; 
cout<<"enter r :";
cin>>r;

// long way 
// long way 
// long way 


// int a = 1;
// for(int i=1; i<=n  ; i++){
//     a=a*i;
// }

// cout<<a<<endl;




// int b=1;
// for(int i=1; i<=r ; i++){
//     b=b*i;
// }

// cout<<b<<endl;


// int c=1;
// for(int i=1; i<=(n-r) ; i++){
//     c=c*i;
// }

// cout<<c<<endl;


// cout<<"permutation is : "<<a/c<<endl  ;
// cout<<"combination is : "<<a/(b*c)<<endl;





// shoert way 
// shoert way 
// shoert way 


int a=fact(n);
int b=fact(r);
int c=fact(n-r);




cout<<"permutation is : "<<a/c<<endl ;
cout<<"combination is : "<<a/(b*c)<<endl;








}