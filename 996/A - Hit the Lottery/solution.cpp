#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v={100,20,10,5,1};
    int ans = 0;
    
    for(auto i : v){
        ans+=n/i;
        n%=i;
    }
    cout<<ans;
}