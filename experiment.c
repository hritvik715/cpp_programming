    #include<stdio.h>
    int main(){


        char str[] = {'g','o','l','u'};
        int i =0;
        int count =0;
        while(str[i] != '\0'){
            count++;
            i++;
        }

        // printf("%d ",sizeof(str));
        // printf("%d ",sizeof(str));
        printf("%d",count);
    }