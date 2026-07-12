#include<bits/stdc++.h>
using namespace std;
bool checkDuplicates(vector<int>&arr,int k){
    unordered_set<int>s;
    for(int i=0;i<arr.size();i++){
        if(s.find(arr[i])!=s.end()){
            return true;
        }
        s.insert(arr[i]);
        if(i>=k){
            s.erase(arr[i-k]);
        }
    }
    return false;
}
int main(){
    vector<int>arr={1,2,3,4,1,2,3,4};
    cout<<checkDuplicates(arr,3);
    return 0;
}