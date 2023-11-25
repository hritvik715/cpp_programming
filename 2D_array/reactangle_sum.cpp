#include<iostream>
#include<limits.h>
using namespace std;
int main(){

int arr[4][3] = {{5,6,7},{9,5,3},{8,7,6},{6,7,5}};
int r[1][1] , l[4][2];
int sum = 0;
for(int i=0 ;i<4 ; i++){
    for(int j=0 ; j<2 ; j++){
        sum = sum + arr[i][j];
    }
}
cout<<"sum  is "<<sum;

}