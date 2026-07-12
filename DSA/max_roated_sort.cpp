#include<bits/stdc++.h>
using namespace std;
int maxEle(vector<int>&arr){
    int n=arr.size();
    int l=0,h=n-1;
    while(l<h){
        if(arr[l]<=arr[h]){
            return arr[h];
        }
        int mid=l+(h-l)/2;
        if(arr[mid]>arr[h]){
            l=mid;
        }
        else{
            h=mid-1;
        }

    }
    return arr[l];
}
int main(){
    vector<int>arr={7, 8, 9, 10, 1, 2, 3, 4, 5};
    cout<<maxEle(arr);
    return 0;
}