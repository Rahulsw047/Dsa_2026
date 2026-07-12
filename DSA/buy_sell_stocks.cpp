#include<bits/stdc++.h>
using namespace std;
int StockProfit(vector<int>&arr){
    int n=arr.size();
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            profit=profit+arr[i]-arr[i-1];
        }
    }
    return profit;
}
int main(){
    vector<int>arr={100,180,260,310,40,535,695};
    cout<<StockProfit(arr);
    return 0;
}