#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5,sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        cout<<sum<<endl;
    }
    cout<<n*(n+1)/2;
    return 0;
}