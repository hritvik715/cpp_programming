#include<iostream>
using namespace std;
int main(){





int cp;
cout<<"enter cp : ";
cin>>cp;


int sp;
cout<<"enter sp : ";
cin>>sp;

if(sp>cp) cout<<"profit of "<<sp-cp;
else if (sp<cp) cout<<"loss of "<<cp-sp;
else if (cp==sp) cout<<"no loss no proft ";


}