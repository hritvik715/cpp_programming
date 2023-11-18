#include<iostream>
using namespace std;

// first 

// void sum(int a , int b){
//     cout<<a+b;
//     return;
// }
// int main(){
//     int a,b;
//     cout<<"enter a : ";
//     cin>>a;
//     cout<<"enter b : ";
//     cin>>b;
//     sum(a,b);
// }

// second

// int sum(int a , int b){
//     cout<<a+b<<endl;
//     return 0;
// }
// int main(){
//     int a,b;
//     cout<<"enter a : ";
//     cin>>a;
//     cout<<"enter b : ";
//     cin>>b;
//     cout<<sum(a,b);
// }



// third 

int sum(int a , int b){//a,b--> formal parameters
    return a+b;
}
int main(){
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<sum(a,b);//a,b--> actual parameters
}


