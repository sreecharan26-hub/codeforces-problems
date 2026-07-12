#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int n = s.size();
    string a = "";
    for(int i=n-1;i>=0;i--){
        a+=s[i];
    }
    if(a==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}