#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int>&arr,int l,int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void QuickSort(vector<int>&arr,int l,int h){
    if(l<h){
        int p=Partition(arr,l,h);
        QuickSort(arr,l,p-1);
        QuickSort(arr,p+1,h);
    }
}
int main(){
    vector<int>arr={2,4,3,5,8,6,7,5};
    QuickSort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}