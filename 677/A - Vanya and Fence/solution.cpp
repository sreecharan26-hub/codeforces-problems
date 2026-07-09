#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    vector<int>v(n);
    for(auto &i: v){
        cin>>i;
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(v[i]<=h){
            cnt++;
        }
        else{
            cnt+=2;
        }
    }
    cout<<cnt;
    return 0;
}