#include<iostream>
using namespace std;
int main(){

int64_t n = 560;
// cout<<"enter a number : ";
// cin>>n;
int64_t count=0;

while(n != 0){
    n=n/10;
    count++;
}
cout<<"no of digits is "<<count;


}