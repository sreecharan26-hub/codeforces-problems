#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    string a="qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans="";
    for(int i=0;i<s.size();i++){
        for(int j=0;j<a.size();j++){
            if(s[i]==a[j]){
                if(ch=='R'){
                  ans+=a[j-1];
                }
                else{
                    ans+=a[j+1];
                }
            }
        }
    }
    cout<<ans;
    return 0;
   
}