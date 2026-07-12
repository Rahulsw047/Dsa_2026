#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>&arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int>arr={1,2,3,4,5,6};
    cout<<isSorted(arr);
    return 0;
}