#include<bits/stdc++.h>
using namespace std;
vector<int>closest_to_k(vector<int>&arr,int k,int x){
    int n=arr.size();
    int left=0,right=n-1;
    int i=0,pos=-1;
    while (left<=right)
    {
        /* code */
        int mid=left+(right-left)/2;
        if(arr[mid]<x){
            pos=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    int l=pos,r=pos+1;
    if(arr[r]==x){
        r++;
    }
    vector<int>ans;
    while (l>=0&&r<n&&ans.size()<k){
        int LD=abs(arr[l]-x);
        int RD=abs(arr[r]-x);
        if(LD<RD){
            ans.push_back(arr[l]);
            l--;
        }
        else{
            ans.push_back(arr[r]);
            r++;
        }
    }
    while(l>=0 && ans.size()<k){
        ans.push_back(arr[l]);
        l--;
    }
    while(r>n && ans.size()<k){
        ans.push_back(arr[r]);
        r++;
    }
    return ans;
  
}
int main(){
    vector<int>arr={12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
    vector<int>v=closest_to_k(arr,4,35);
    for(int x:v){
        cout<<x;
    }
    return 0;
}