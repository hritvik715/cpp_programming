#include<iostream>
using namespace std;


int main(){
    int arr[] = {5,3,2};
    int max;
    for(int i=0 ; i < sizeof(arr)/4 ; i++){
        for(int j=i+1 ; j<sizeof(arr)/4 ; j++){
            if(arr[i] > arr[j]) max = arr[i];
        }
    }
    
}

//we conslude that array --> pass by refrence hote hai