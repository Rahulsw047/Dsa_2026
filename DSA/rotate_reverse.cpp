#include<bits/stdc++.h>
using namespace std;
void reverse_(vector<int>&arr){
    int s=0,e=arr.size();
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
void rotate_(vector<int>&arr,int d){
    d=d%arr.size();
     reverse(arr.begin(),arr.end());
     reverse(arr.begin(),arr.begin()+d);    
     reverse(arr.begin()+d,arr.end());
}
int main(){
    vector<int>arr={1,2,3,4,5,6};
    int n=arr.size();
    // reverse_(arr);
    // for(int s:arr){
    //     cout<<s;
    // }
    rotate_(arr,2);
     for(int s:arr){
        cout<<s;
    }
    return 0;
}