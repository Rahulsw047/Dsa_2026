#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=13,m=4;
    int q=n/m;
    int n1=m*q;
    int n2=(n*m)>0?m*(q+1):m*(q-1);
    if(abs(n-n1)<abs(n-n2)){
        cout<<n1;
    }
    else{
        cout<<n2;
    }
    return 0;
}