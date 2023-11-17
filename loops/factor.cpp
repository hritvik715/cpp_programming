#include<iostream>
using namespace std;
int main(){

int n=24;



// (i) update nhi ho rha
// (i) update nhi ho rha
// (i) update nhi ho rha
// (i) update nhi ho rha
        // |
        // |
        // |
        // |
        // |
        // ↓
// for(int i = 1; i<n ; i++)
// {
//     if(n%i == 0) cout<<i<<endl;//--> update nhi ho rha 
// }




// problem sorted 
// problem sorted 
// problem sorted 
// problem sorted 


// first method 
// first method 
// first method 
// first method 
// first method 

//  int factor;   //store kraunga highest factor
// for(int i = 1; i<n ; i++)
// {
//     if(n%i == 0) factor = i ; 
// }
// cout<<"highest factor of "<<n<<" is " <<factor;






// second method 
// second method 
// second method 
// second method 




for(int i = n/2 ; i>=1 ; i--)
{
    if(n%i==0)
    {
         cout<<i<<endl; 
         break;
    }
}







}