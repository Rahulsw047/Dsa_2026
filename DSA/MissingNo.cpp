#include<bits/stdc++.h>
using namespace std;
int MissingNumber(vector<int>&arr){
    int n=arr.size()+1;
    int x1=0,x2=0;
    for(int i=0;i<n-1;i++){
        x2=x2^arr[i];
    }
    for(int i=1;i<=n;i++){
        x1=x1^i;
    }
    return x2^x1;
}
int main(){
    vector<int>arr={1,2,4,5};
    cout<<MissingNumber(arr);
    return 0;
}