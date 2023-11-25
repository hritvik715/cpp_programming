#include<iostream>
#include<limits.h>
using namespace std;


int main(){
    int arr[] = {5,3,2,9};
    int mn=INT_MAX;
    int n = sizeof(arr)/4;
    for(int i = 0 ; i<n ;i++){
        // first way
        if(arr[i]<mn) mn =arr[i]; 
          
        //second way
        // mn = min(mn,arr[i]);
    }
    cout<<mn;




}

//we conslude that array --> pass by refrence hote hai