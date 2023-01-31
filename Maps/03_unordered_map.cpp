#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    // 1. Inbuilt implementation
    // 2. Time complexity
    // 3. Valid keys datatype
    unordered_map<int,string> m;
    m[1]="abc"; // O(1)
    m[4]="def";
    m[2]="ghi";
    m[7]="xyz";
    m[9]="aa";
    m.insert({3,"yui"});
    m.insert(make_pair(2,"opop"));
    map<int,string> :: iterator it;
    // for(it=m.begin();it!=m.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // If we use string as key the it sort elements in lexographically

    auto i=m.find(3); // O(1)
    if(i==m.end()) cout<<"No value\n";
    else cout<<(*i).first<<" "<<(*i).second<<endl;

    if(i != m.end())
        m.erase(2); // O(1)
    print(m);
    m.clear();
    print(m);
    return 0;
}