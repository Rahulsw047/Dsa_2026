#include<bits/stdc++.h>
using namespace std;
int LPS(vector<int>&arr){
    int n=arr.size();
    if(n<2){
        return -1;
    }
    int f,sec;
    if(arr[0]>arr[1]){
        f=arr[0];
        sec=arr[1];
    }
    else{
        f=arr[1];
        sec=arr[0];
    }

    for(int i=2;i<n;i++){
        if(arr[i]>f){
            sec=f;
            f=arr[i];
        }
        else if(arr[i]>sec){
            sec=arr[i];
        }
    }
    return f+sec;
}
int main(){
    vector<int>arr={12,34,10,6,40};
    cout<<LPS(arr);
    return 0;
}