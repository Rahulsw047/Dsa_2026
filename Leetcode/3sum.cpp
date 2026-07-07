#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>&nums){
    vector<vector<int>>ans;
    int n=nums.size();
    sort(nums.begin(),nums.end());


    for(int i=0;i<n-2;i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }       
        int left=i+1;
        int right=n-1;
        int target=-nums[i];
        while(left<right){
           
            int sum=nums[left]+nums[right];

            if(sum==target){
                ans.push_back({nums[i],nums[left],nums[right]});

                while(left<right && nums[left]==nums[left+1]){
                    left++;
                }

                while(left<right && nums[right]==nums[right-1]){
                    right--;
                }

                left++;
                right--;
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }

    }
    return ans;
}
int main(){
    vector<int>v={-1,0,1,2,-1,-4};
    vector<vector<int>>ans=threeSum(v);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}