#include<iostream>
#include<limits.h>
using namespace std;
int main(){

int arr[2][3] = {{5,6,7},{9,5,3}};
int sum = 0;
for(int i=0 ;i<2 ; i++){
    for(int j=0 ; j<3 ; j++){
        sum = sum + arr[i][j];
    }
}
cout<<"max element is "<<sum;

}