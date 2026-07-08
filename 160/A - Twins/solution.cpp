#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i : v){
        cin>>i;
    }
    int sum =0;
    int cnt =0;
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    int a = 0;
    for(int i=0;i<n;i++){
        a+=v[i];
        cnt++;
        if(a>sum-a){
            break;
        }
    }
    cout<<cnt;
    return 0;
}