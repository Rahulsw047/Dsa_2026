#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={10,20,50,60,40};
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}