#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&arr){
    int n=arr.size();
    bool swaped;
    for(int i=0;i<n-1;i++){
        swaped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(!swaped){
            break;
        }
    }
}
int main(){
    vector<int>arr={2,3,5,4,9,7,6,2,4};
    int n=arr.size();
    bubbleSort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}