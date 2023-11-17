#include<stdio.h>
int main(){



    int arr[5] = {9, 5, 74, 19, 2};
    int x;
    // int max = arr[0];//first element le lenge array ka
    for (int i = 0; i < 5; i++)
    {
        if (arr[i+1]> arr[i])
        {
             x = arr[i+1];
            // printf("%d ",arr[i+1]);
        }
    }
    printf("%d", x);
    




    return 0;
}