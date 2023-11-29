    #include<iostream>
    using namespace std;
    int main(){


        // string s ="golu";
        // string s ={'g','o','l','u'};
        // char s[] = "golu";
        char s[] = {'g','o','l','u'};
        int i =0;
        int count =0;
        while(s[i] != '\0'){
            count++;
            i++;
        }

        // cout<<sizeof(s)<<endl;
        cout<<count;
    }