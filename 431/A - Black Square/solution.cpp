#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int ans =0;
    string s;
    cin>>s;
    for(auto i : s){
        ans+=a[i-'1'];
    }
    cout<<ans;
    return 0;
}