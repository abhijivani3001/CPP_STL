#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,multiset<string>> marks_map;
    int n;
    cin>>n;
    while(n--){
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[-1*marks].insert(name);
    }
    for(auto &marks_stud : marks_map){
        auto &students=marks_stud.second;
        int marks=marks_stud.first;
        for(auto student:students){
            cout<<student<<" "<<-1*marks<<endl;
        }
    }
    return 0;
}