// #include<iostream>
// using namespace std;
// int main(){





//     int x =2;
//     int y=5;
//     cout<<x<<" "<<y<<endl;
   
// //    first way 
//     // int temp = x;
//     // x = y;
//     // y = temp;
//     // cout<<x<<" "<<y<<endl;

// // second way 
//     // x=x+y;
//     // y=x-y;
//     // x=x-y;
//     // cout<<x<<" "<<y<<endl;
// }




// third way 
// third way 
// third way 
// third way 
// third way 
// third way 



#include <iostream>
using namespace std;


    void swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
        return;
    }

int main()
{
    int x = 2;
    int y = 5;
    cout << x << " " << y << endl;

    swap(x, y);
    cout << x << " " << y;
}