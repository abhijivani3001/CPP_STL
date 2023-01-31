#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr:m){ // Here & is used, because we are not interested in copied value; we are interested in actual value
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    // Syntax: map<key,value> m; //Sorted by key
    map<int,string> m;
    m[1]="abc"; // O(lon(n))
    m[5]="abc";
    m[4]="pqr";
    m[6]="xyz";
    m[6]="qwe";
    m[8]; // If we just write like this, it will create memory location corresponding to key 8 and assigns ""(empty string) to it
    // keys are unique but values are not
    // We can insert duplicate values, but if we insert duplicate keys then acoording to new key, the value will be changed
    m.insert({3,"yui"});
    m.insert(make_pair(2,"opop"));
    
    map<int,string> :: iterator it;
    // for(it=m.begin();it!=m.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    //     // (*it) takes value of pair of map
    // }
    // If we use string as key the it sort elements in lexographically

    auto i=m.find(3); // O(log(n))
    if(i==m.end()) cout<<"No value\n";
    else cout<<(*i).first<<" "<<(*i).second<<endl;

    if(i != m.end())
        m.erase(2); // O(log(n))
    // print(m);
    m.clear();
    print(m);
    return 0;
}