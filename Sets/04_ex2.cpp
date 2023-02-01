/*
Given N strings and Q queries.
In each query you are given a string.
Print "yes" if string is present else prnt "no"
N<=10^6
|S|<=100
Q<=10^6
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> s;
    // In unordered_set, keys must not be complex data structures(ex. pair<>,set<>,map<>,vector<>,...)
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str)==s.end()){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
    }
    return 0;
}
