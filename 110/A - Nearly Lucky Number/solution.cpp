#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n ;
    cin>>n;
    string s = to_string(n);
    int cnt =0;
    for(auto i : s){
        if(i=='4' or i=='7'){
            cnt++;
        }
    }
    if(cnt == 4 or cnt == 7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
    
}