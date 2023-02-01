#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s){
    for(auto val:s){
        cout<<val<<endl;
    }
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<(*it)<<endl;
    // }
}

int main(){
    // unordered_set not maintain order of set and we can't use complex data structures in this set.
    // we can use : int, float, double, string
    // we can't use : vector<>, map<>, set<>, pair<>
    unordered_set<string> s;
    s.insert("abc"); // O(1)
    s.insert("zwer");
    s.insert("gfdg");
    s.insert("ads");
    s.insert("zwer");
    s.insert("jtg");
    // auto it=s.find("abc");
    // if(it!=s.end()){
        // cout<<(*it);
    // }
    auto it=s.find("gfdg"); // O(1)
    if(it!=s.end())
        s.erase(it);
    s.erase("zwer");
    print(s);
    return 0;
}