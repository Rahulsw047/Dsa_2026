#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=1,y=4;
    if(x==1){
        return (y==1);
    }
    int pow=1;
    cout<<y<<pow<<endl;
    while(pow<y){
        pow=pow*x;
        cout<<y<<pow<<endl;
    }
    
    return 0;
}