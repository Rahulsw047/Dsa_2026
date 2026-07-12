#include<bits/stdc++.h>
using namespace std;
void rearrangeArray(vector<int>&arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        if((i+1)%2==0){
            if(arr[i]<arr[i-1]){
                swap(arr[i],arr[i-1]);
            }
        }
        else{
            if(arr[i]>arr[i-1]){
                swap(arr[i],arr[i-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){ 
    vector<int>arr={1,2,2,1};
    rearrangeArray(arr);
    return 0;
}