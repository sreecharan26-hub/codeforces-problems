#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<string>v(n);
    for(auto &i : v){
        cin>>i;
    }
    vector<string>s;
    map<string,int>a;
    for(auto i :v){
        a[i]++;
        if(a[i]==1){
            s.push_back("OK");
        }
        else{
            s.push_back(i+to_string(a[i]-1));
        }
    }
    for(auto i : s){
        cout<<i<<endl;
    }
    return 0;
    
}