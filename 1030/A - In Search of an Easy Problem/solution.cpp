#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i : v){
        cin>>i;
    }
    for(int i=0;i<n;i++){
        if(v[i]==1){
            cout<<"hard";
            return 0;
        }
    }
    cout<<"easy";
    return 0;
}