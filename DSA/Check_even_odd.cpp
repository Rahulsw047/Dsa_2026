#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    cout<<(n&1)<<endl;
    //if(n%2==0)
    if((n&1)==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}