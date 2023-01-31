#include<bits/stdc++.h>
using namespace std;

int main(){
    // Iterators is a pointer which points to the container(vector,map,set,...)
    // .begin() --> points first element
    // .end() --> points next of last element

    vector<int> v={2,4,3,5,4,1,8};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // Syntax 
    vector<int> ::iterator it=v.begin();
    cout<<(*(it+1))<<endl; // Using *, we can access the value

    for(it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    return 0;
}

// NOTE: There is a difference between it++ and it+1
// it++ --> moves to next iterator
// it+1 --> moves to next location in memory
// The difference is not found in vectors, because the memory allocation in vec is continuous
// But in MAP, SET,.. the difference is found due to discontinuous memory allocation