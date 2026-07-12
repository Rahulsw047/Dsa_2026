#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
}
int main(){
    vector<int>arr={2,4,36,5,7,9,1,5,6,4};
    int n=arr.size();
    selectionSort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}