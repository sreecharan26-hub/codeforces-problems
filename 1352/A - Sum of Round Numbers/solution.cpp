#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int digit = 1;
        while(n>0){
            int d = n%10;
            if(d!=0){
                v.push_back(d*digit);
            }
            digit*=10;
            n/=10;
        }
        cout<<v.size()<<endl;
        for(auto i : v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}