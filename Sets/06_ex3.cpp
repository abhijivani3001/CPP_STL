/*
You are given an n bags and each bags contain a[i] chocolates.
You can eat whole bag's chocolaes in one minute.
You have to go your home before k minutes.
So find how many max chocolates you can eat.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++){
            long long candy;
            cin>>candy;
            bags.insert(candy);
        }
        long long total=0;
        while(k--){
            auto last_it=(--bags.end());
            long long candy_ct=*last_it;
            total+=candy_ct;
            bags.erase(*last_it);
            bags.insert(candy_ct/2);
        }
        cout<<total<<endl;
    }
    return 0;
}