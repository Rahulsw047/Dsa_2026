#include<bits/stdc++.h>
using namespace std;
void Rotate(vector<int>&nums,int k){
    int n=nums.size();
    k=k%n;

    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}
int main(){
    vector<int>v={1,2,3,4,5,6,7};
    Rotate(v,3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}