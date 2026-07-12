#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={10,20,50,40,60};
    int largest=-1;
    int sec=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            sec=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>sec){
            sec=arr[i];
        }
    }
    cout<<sec;
}