#include<bits/stdc++.h>
using namespace std;
int bitonic_point(vector<int>&arr){
    int n=arr.size();
    if(n==1||arr[0]>arr[1]){
        return arr[0];
    }
    if(arr[n-1]>arr[n-2]){
        return arr[n-1];
    }
    int l=0,h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        if(arr[mid]<arr[mid+1]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return arr[h];
}
int main(){
    vector<int>arr={1,2,4,5,7,8,3};
    cout<<bitonic_point(arr);
    return 0;
}