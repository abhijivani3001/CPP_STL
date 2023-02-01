#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
    for(auto val:s){
        cout<<val<<endl;
    }
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<(*it)<<endl;
    // }
}

int main(){
    // multiset are used to insert same values in set again
    multiset<string> s;
    s.insert("abc"); // O(log(n))
    s.insert("zwer");
    s.insert("gfdg");
    s.insert("ads");
    s.insert("zwer");
    s.insert("jtg");
    // print(s);

    // auto it=s.find("abc");
    // if(it!=s.end()){
    //     cout<<(*it);
    // }
    // auto it=s.find("zwer"); // O(log(n))
    // if(it!=s.end())
    //     s.erase(it); // Erase only one string, because it erase value at iterator --> which points only one string
    s.erase("zwer"); // Erase all same strings(values)
    print(s);
    return 0;
}