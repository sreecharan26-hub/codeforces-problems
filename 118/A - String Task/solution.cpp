#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans ="";
    for(auto i : s){
        char c = tolower(i);
        if(c!='a' and c!='e' and c!='i' and c!='o' and c!='u' and c!='y'){
            ans+='.';
            ans+=c;
        }
    }
    cout<<ans<<endl;
    return 0;
}