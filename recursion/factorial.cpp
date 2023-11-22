#include<iostream>
using namespace std;

int fact(int a){
    if(a==1) return 1;
    return a*fact(a-1);
}



int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    cout<<fact(n);




}


// note-->
// (a) int main fxn mey (return 0) ki jarrorat nhi hoti lekin 
//     lekin agar khud se fxn bna rhe ho then (return) karna compulsory hota hai jaise int,char .....fxns mey
//     return karna hi hota hai lekin void me marji hoti hai return likho ya nhi 
// (b) you can only do return; within a void function, or exit the function by reaching the end
// 