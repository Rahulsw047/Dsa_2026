#include<bits/stdc++.h>
using namespace std;
int minEle(vector<int>&arr){
    int n=arr.size();
    int l=0,h=n-1;
    while(l<h){
        if(arr[l]<arr[h]){
            return arr[l];
        }
        int mid=l+(h-l)/2;
        if(arr[mid]>arr[h]){
            l=mid+1;
        }
        else{
            h=mid;
        }
    }
    return arr[l];
}
int main(){
    vector<int>arr={5, 6, 1, 2, 3, 4};
    cout<<minEle(arr);
    return 0;
}