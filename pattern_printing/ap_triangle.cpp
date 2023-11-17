#include<iostream>
using namespace std;
int main(){



int n; 
cout<<"enter n : ";
cin>>n;


for(int i=1 ; i<=n ; i++){
    for(int j=n ; j<=(2*n-2) ; j=j+2){
        cout<<j<<" ";
    }
    cout<<endl;
}










}