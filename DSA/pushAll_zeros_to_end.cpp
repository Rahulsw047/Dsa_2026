#include<bits/stdc++.h>
using namespace std;
void pushZeros(vector<int>&v){
    int n=v.size();
    //initilize counter
    int count=0;
    for(int i=0;i<n;i++){
        //if element is not zero  //ex v[0]!=0 because v[0]==1
        if(v[i]!=0){
            swap(v[count],v[i]); //swap v[0] and v[0] means 1 and 1
            count++;//count=1
        }
    }
}
int main(){
    vector<int>arr={1, 2, 0, 4, 3, 0, 5, 0};
    pushZeros(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}