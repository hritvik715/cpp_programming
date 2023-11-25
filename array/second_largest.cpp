#include<iostream>
#include<limits.h>
using namespace std;


int main()
{
    int arr[] = {5,3,2};
    int mx=INT_MIN;
    int n = sizeof(arr)/4;
    for(int i = 0 ; i<n ;i++)
    {
        // first way
        if(arr[i]>mx) mx =arr[i]; 
          
        //second way
        // mx = max(mx,arr[i]);
    }
    cout<<"largets element is : "<<mx<<endl;
    int smax=INT_MIN;
    for(int i = 0 ; i<n ;i++)
    {
        // first way 
        // if(arr[i] != mx)
        // {
        //     if(smax<arr[i] ) smax= arr[i];
        // }
        // second way 
        if(arr[i] != mx) {
            smax= max(smax,arr[i]);
        }
      
    }
    cout<<smax;
}


//we conslude that array --> pass by refrence hote hai