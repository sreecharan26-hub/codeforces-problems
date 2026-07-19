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
        
        if(a[i]==0){
            cout<<"OK"<<endl;
        }
        else{
            cout<<i<<a[i]<<endl;
        }
        a[i]++;
    }
    return 0;
    
}