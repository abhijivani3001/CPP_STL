#include<bits/stdc++.h>
using namespace std;

int main(){
    auto a=1;
    cout<<a<<endl;

    vector<pair<int,int>> p={{1,3},{5,2}};
    for(auto val:p){
        cout<<val.first<<" "<<val.second<<endl;
    } // Here due to auto keyword, val automatically determined that p is a vector<pair>
    return 0;
}