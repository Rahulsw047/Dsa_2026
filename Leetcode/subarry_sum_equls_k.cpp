#include<bits/stdc++.h>
using namespace std;
int subarray_sum(vector<int>&nums,int k){
    unordered_map<int,int>prefix_map;
    int n=nums.size();

    prefix_map[0]=1;

    int curr_Sum=0,count=0;
    for(int i=0;i<n;i++){
        curr_Sum+=nums[i];
        int req_sum=curr_Sum-k;
        if(prefix_map.find(req_sum)!=prefix_map.end()){
            count+=prefix_map[req_sum];
        }
        prefix_map[curr_Sum]++;
    }
    return count;
}
int main(){
    vector<int>nums={1,2,3};
    cout<<subarray_sum(nums,3);
    return 0; 
}