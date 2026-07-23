#include<bits/stdc++.h>;
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i : v){
        cin>>i;
    }
    int cnt = 1;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}