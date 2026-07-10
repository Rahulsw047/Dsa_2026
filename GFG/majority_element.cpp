#include<bits/stdc++.h>
using namespace std;
int majority_element(vector<int>&arr){
    int n=arr.size();
    int candidate=-1;
    int count=0;

    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
            count=1;
        }
        else if(arr[i]==candidate){
            count++;
        }
        else{
            count--;
        }
    }

    int final_cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            final_cnt++;
        }
    }

    if(final_cnt>n/2){
        return candidate;
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,3,5};
    cout<<majority_element(arr);
    return 0;
}