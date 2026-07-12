#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5,sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+(i*i);
        cout<<sum<<" "<<i<<endl;
    }
    cout<<n*(n+1)*(2*n+1)/6;
    return 0;
}