#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
    int arr[] = {5,3,2};
    int mx=arr[0];
    int n = sizeof(arr)/4;
    for(int i = 0 ; i<n ;i++){
        // first way
        // if(arr[i]>mx) mx =arr[i]; 
          
        //second way
        mx = max(mx,arr[i]);
    }
    cout<<mx;




}

//we conslude that array --> pass by refrence hote hai