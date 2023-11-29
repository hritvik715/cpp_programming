#include<stdio.h>
// using namespace std;
int main(){



    char s[]="golu";


    int i = 0;
    int count =0;
    while(s[i] !='\0'){
        count++;
        i++;
    }
    // cout<<count;
    printf("size of string is : %d",count);
}