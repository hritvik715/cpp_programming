#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){





    // string s = "golu pandits";
    // int n = s.length();
    // int i=0 ; 
    // int j = n-1;
    // while(i<j){
    //     int temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;

    // }
    // for(int i=0 ; i<n ; i++){
    //     cout<<s[i]<<" ";
    // }



    //  second way 

    string s = "golu is a good guy";
    reverse(s.begin(),s.end());
    cout<<s<<endl;




}