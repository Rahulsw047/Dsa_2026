#include<bits/stdc++.h>
using namespace std;
int count1s(vector<int>&arr){
    int n=arr.size();
    int l=0,h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==0){
            h=mid-1;
        }
        else if(mid==n-1||arr[mid+1]!=1){
            return mid+1;
        }
        else{
            l=mid+1;
        }
    }
    return 0;
}
int main(){
    vector<int>arr={1,1,1,1,0,0,0};
    cout<<count1s(arr);
}