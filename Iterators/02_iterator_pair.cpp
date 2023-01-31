#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> p={{1,2},{5,3},{4,7}};
    vector<pair<int,int>> :: iterator it;
    for(it=p.begin();it!=p.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for(it=p.begin();it!=p.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    // (*it).first <=> (it->first)
    return 0;
}