#include<bits/stdc++.h>
using namespace std;
int subArraySum(vector<int>&arr){
    int n=arr.size();
    int res=0;
    for(int i=0;i<n;i++){
        res=res+(arr[i]*(i+1)*(n-i));
    }
    return res;
}
int main(){
    vector<int>arr={1,4,5,3,2};
    cout<<subArraySum(arr);
    return 0;
}
