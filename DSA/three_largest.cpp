#include<bits/stdc++.h>
using namespace std;
vector<int>threeLargest(vector<int>&arr){
    int fi=INT_MIN,sec=INT_MIN,th=INT_MIN;
    vector<int>ans;
    for(int x:arr){
        if(x>fi){
            th=sec;
            sec=fi;
            fi=x;
        }
        else if(x>sec && fi!=x){
            th=sec;
            sec=x;
        }
        else if(x>th && sec!=x && fi!=x){
            th=x;
        }
    }
    if(fi==INT_MIN){
        return ans;
    }
    ans.push_back(fi);
    if(sec==INT_MIN){
        return ans;
    }
    ans.push_back(sec);
    if(th==INT_MIN){
        return ans;
    }
    ans.push_back(th);
    return ans;
}
int main(){
    vector<int>arr={12,13,1,10,34,1};
    vector<int>v=threeLargest(arr);
    for(int x:v){
        cout<<x;
    }
}