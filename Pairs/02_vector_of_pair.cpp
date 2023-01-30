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
    // It will sort elements by first index. If first more than one value of first index is same then sort by second index
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}