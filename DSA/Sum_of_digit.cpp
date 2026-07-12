#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=12345;
    int sum=0;
    while (n!=0)
    {
        /* code */
        int last=n%10;
        sum=sum+last;
        n=n/10;
        cout<<sum<<endl;
    }
    
    return 0;
}