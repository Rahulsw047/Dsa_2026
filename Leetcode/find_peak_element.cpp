#include<bits/stdc++.h>
using namespace std;
int find_peak_element(vector<int>&nums){
    int n=nums.size();
    int low=0,high=n-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(nums[mid]<nums[mid+1]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return low;
}
int main(){
    vector<int>nums={1,2,3,1};
    cout<<find_peak_element(nums);
    return 0;
}