#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upper =0,lower =0;
    for(auto i : s){
        if(i>='a' and i<='z'){
            lower++;
        }
        else{
            upper++;
        }
    }
        
        if(lower>=upper){
            for(auto &i : s){
                i=tolower(i);
            }
        }
        else{
            for(auto &i: s){
                i=toupper(i);
            }
        }
        cout<<s;
        return 0;
    
}