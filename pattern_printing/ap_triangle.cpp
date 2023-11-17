#include<iostream>
using namespace std;
int main(){



int n; 
cout<<"enter n : ";
cin>>n;


// for(int i=1 ; i<=n ; i++){
//     for(int j=1 ; j<=(2*n-2) ; j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }


for(int i=1 ; i<=(2*n-1) ; i=(2*i)+1){
    cout<<i<<" ";
}








}