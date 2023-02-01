#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(auto val:s){
        cout<<val<<endl;
    }
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<(*it)<<endl;
    // }
}

int main(){
    // Collection of some elements are called sets
    // 1. normal set, 2. unordered set, 3. multisets
    set<string> s;
    s.insert("abc"); // O(log(n))
    s.insert("zwer");
    s.insert("gfdg");
    s.insert("ads");
    s.insert("zwer");
    s.insert("jtg");
    // auto it=s.find("abc");
    // if(it!=s.end()){
        // cout<<(*it);
    // }
    auto it=s.find("gfdg"); // O(log(n))
    if(it!=s.end())
        s.erase(it);
    s.erase("zwer");
    print(s);
    return 0;
}