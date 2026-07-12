#include<bits/stdc++.h>
using namespace std;
int sqrt1(int n){
    int l=1,h=n,res=1;
    cout<<l<<" "<<h<<" "<<res<<endl;
    while(l<=h){
        int m=l+(h-l)/2;
        cout<<l<<" "<<h<<" "<<m<<" "<<res<<endl;
        if(m*m<=n){
           res=m;
           l=m+1; 
        }
        else{
            h=m-1;
        }
    }
    return res;
}
int main(){
     sqrt1(4);
    return 0;
   
}