#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        // You can insert pair of elements by any method
        v.push_back({x,y});
        // v.push_back(make_pair(x,y));
    }
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end()); 
    // It will sort elements by first element. If more than one value of first value of pair is same then sort by second value of pair
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
