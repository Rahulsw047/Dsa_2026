#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&arr,int k){
    int n=arr.size();
    int l=0,r=n-1;
    while (l<=r)
    {
        /* code */
        int mid=l+(r-l)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]>=arr[l]){
            if(k>=arr[l]&&k<arr[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else{
            if(k>arr[mid]&&k<=arr[r]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
       
    }
     return -1;
    
}
int main(){
    vector<int>arr={5, 6, 7, 8, 9, 10, 1, 2, 3};
    cout<<search(arr,3);
    return 0;
}