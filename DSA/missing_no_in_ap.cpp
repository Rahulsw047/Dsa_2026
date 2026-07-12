#include<bits/stdc++.h>
using namespace std;
int Missing_ap(vector<int>&arr){
    int n=arr.size();
    int diff=(arr[1]-arr[0]==arr[n-1]-arr[n-2])?arr[1]-arr[0]:((arr[1]-arr[0]==(arr[n-1]-arr[0]/n))?arr[1]-arr[0]:arr[n-1]-arr[n-2]);
    if(diff==0)
      return arr[0];
    int l=0,h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if((arr[mid]-arr[0])/diff==mid){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return arr[h]+diff;
}
int main(){
    vector<int>v={21, 6, 11, 16, 21, 31};
    cout<<Missing_ap(v);
}