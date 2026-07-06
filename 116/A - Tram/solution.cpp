#include<bits/stdc++.h>
using namespace std;
int main(){
    int maxi =0;
    int n;
    cin>>n;
    int sum =0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
 
        sum+=b-a;
        maxi=max(maxi,sum);
    }
    cout<<maxi;
    return 0;
}