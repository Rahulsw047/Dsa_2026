#include<bits/stdc++.h>
using namespace std;
int fixed_point(vector<int>&arr){
    int n=arr.size();
    int l=0,h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==mid){
            return mid;
        }
        if(arr[mid]<mid){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={-10, -5, 0, 3, 7};
    cout<<fixed_point(arr);
    return 0;
}