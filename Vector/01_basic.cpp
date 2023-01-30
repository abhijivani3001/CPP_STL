#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.push_back(18);
    cout<<endl;
}

int main(){
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     print(v);
    //     v.push_back(x); // O(1)
    // }
    // print(v);

    int x; cin>>x;
    vector<int> v1(x); // It creates x size of array with value 0 at all indexes
    // We can acces v[i] element at any time before assign value
    // If we use v.push_back(), then new value will added after x elements
    
    vector<int> v2; // It is just empty vector with size 0
    // We cannot acces v[i] directly, unless we assign value to it
    // To assign value, we can use v.push_back() but cannot use cin>>v[i]

    // Syntax : vector<int> v(n, m);
    // --> n = number of variables 
    // --> m = value assign to that n variables

    // vector<int> v(5); // By default it's value if 0
    vector<int> v(5,3);
    v.push_back(9);
    v.push_back(5);
    v.push_back(4);
    v.pop_back(); // O(1)
    print(v);
    print(v);
    // vector<int> v2=v; // O(n) -- make copy of v
    vector<int> &v2=v; // By reference
    v2.pop_back();
    print(v2);
    print(v);

    return 0;
}