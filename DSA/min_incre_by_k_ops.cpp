#include<bits/stdc++.h>
using namespace std;
int minOps(vector<int>&arr,int k){
    int maxV=*max_element(arr.begin(),arr.end()); //ex 19
    int res=0;
    for(int i=0;i<arr.size();i++){
        //if (19-4 % 3 =0)
        if((maxV-arr[i])%k!=0){
            return -1;
        }
        res=res+(maxV-arr[i])/k;//0+(19-4)/3=0+5=5
    }
    return res;
}
int main(){
    vector<int>arr={4,7,19,16};
    cout<<minOps(arr,3);
    return 0;
}