#include<bits/stdc++.h>
using namespace std;
int max_profit(vector<int>&prices){
    int n=prices.size();
    int max_profit=0;

    for(int i=1;i<n;i++){
        if(prices[i]>prices[i-1]){
            max_profit+=(prices[i]-prices[i-1]);
        }
    }
    return max_profit;
}
int main(){
    vector<int>prices={100, 180, 260, 310, 40, 535, 695};
    cout<<max_profit(prices);
    return 0;
}