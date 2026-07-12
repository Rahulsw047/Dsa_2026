#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxR=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=maxR){
            maxR=arr[i];
            cout<<maxR;
        }
    }
    reverse(arr,arr+n);
    return 0;
}