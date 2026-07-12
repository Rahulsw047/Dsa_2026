#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={10,5,3,4,3,5,6};
    int n=arr.size();
    int minele=INT_MAX;
    unordered_set<int>s;
    for(int i=n-1;i>=0;i--){
        if(s.find(arr[i])!=s.end()){
            minele=min(minele,i);
        }
        s.insert(arr[i]);
    }
    minele==INT_MAX?-1:minele;
    cout<<arr[minele];
}