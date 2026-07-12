#include<bits/stdc++.h>
using namespace std;
bool TwoSum(vector<int>&arr,int target){
    unordered_set<int>s;
    for(int i=0;i<arr.size();i++){
        int com=target-arr[i];
        if(s.find(com)!=s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
int main(){
    vector<int>arr={0,-1,2,-3,1};
    cout<<TwoSum(arr,-2);
    return 0;
}