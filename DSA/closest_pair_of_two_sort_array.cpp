#include<bits/stdc++.h>
using namespace std;
void closest_pair(vector<int>&arr1,vector<int>&arr2,int m,int n,int x){
    int diff=INT_MAX;
    int ans_l,ans_r;
    int l=0,r=n-1;
    while(l<m && r>=0){
        if(abs(arr1[l]+arr2[r]-x)<diff){
            ans_l=l;
            ans_r=r;
            diff=abs(arr1[l]+arr2[r]-x);
        }
        if(arr1[l]+arr2[r]>x){
            r--;
        }
        else{
            l++;
        }
    }
    cout<<arr1[ans_l]<<" "<<arr2[ans_r];
}
int main(){
    vector<int>arr1={1, 4, 5, 7};
    vector<int>arr2={10, 20, 30, 40};
    closest_pair(arr1,arr2,arr1.size(),arr2.size(),38);
    return 0;
}