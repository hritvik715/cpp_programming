#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,6,5};
    int x = sizeof(arr)/4;
    int sum= 0;
    for(int i=0 ; i<x ; i++){
        sum += arr[i];
    }
    cout<<sum;

}

//we conslude that array --> pass by refrence hote hai 