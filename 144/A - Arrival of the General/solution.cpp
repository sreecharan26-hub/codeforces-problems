#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int maxi = -1;
    int mini = 101;
    int mxpos =0;
    int mnpos = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        
        if(v[i]>maxi){
            maxi = v[i];
            mxpos = i;
        }
        if(v[i]<=mini){
            mini = v[i];
            mnpos = i;
        }
    }
    int ans = mxpos+(n-1-mnpos);
    if(mxpos>mnpos){
        ans--;
    }
    cout<<ans;
    return 0;
}