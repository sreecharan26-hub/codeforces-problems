#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    int p,q;
    cin>>p;
    vector<int>v1(p);
    for(auto &i : v1){
        cin>>i;
        s.insert(i);
    }
    cin>>q;
    vector<int>v2(q);
    for(auto &i : v2){
        cin>>i;
        s.insert(i);
    }
    if(s.size()==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
    
}