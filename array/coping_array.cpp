#include<iostream>
using namespace std;
int main(){
int n = 5;
int arr[5] = {5,4,3,2,1};
int brr[5];
// first way 
// for(int i=0 ; i<5 ; i++)
// {
//     brr[i] = arr[4-i];
//     cout<<brr[i]<<" ";
// }
// second way 
for(int i=0 ; i<5 ; i++)
{  
    brr[i] = arr[n-1-i];
    cout<<brr[i]<<" ";
}




}