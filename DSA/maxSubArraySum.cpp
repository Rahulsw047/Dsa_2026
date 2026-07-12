#include<bits/stdc++.h>
using namespace std;
int maxSum(vector<int>&arr){
    int n=arr.size();
    int res=arr[0],maxE=arr[0];
    for(int i=1;i<n;i++){
        maxE=max(arr[i],maxE+arr[i]);
        res=max(res,maxE);
    }
    return res;
}
int main(){
    vector<int>arr={2,3,-8,7,-1,2,3};
    cout<<maxSum(arr);
    return 0;
}