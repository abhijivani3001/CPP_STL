#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,4,3,5,4,1,8};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    // Range Based Loop
    for(int i:v){ // By value(copy)
        i++; // does not affect actual value
        // cout<<i<<" ";
    }
    for(int &i:v){ // By references
        i++; // affects actual value
        // cout<<i<<" ";
    }
    // cout<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<pair<int,int>> p={{1,3},{5,2}};
    for(pair<int,int> val:p){
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}