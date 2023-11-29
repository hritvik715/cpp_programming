#include <iostream>
using namespace std;
int main()
{

string s =  "golu is a good boy ";
int n=  s.length();
int count =0 ;
for(int i = 0 ; i<n ; i++)
{
    if(s[i]=='a' ||s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'||s[i]=='A' ||s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') 
    {
        count++;
    }
}
cout<<"no. of vowels in given string is "<<count;

}