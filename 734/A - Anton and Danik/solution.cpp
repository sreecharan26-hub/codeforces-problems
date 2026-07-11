#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    int cnta=0,cntb=0;
    for(auto i : s){
        if(i=='A'){
            cnta++;
        }
        else{
            cntb++;
        }
    }
    if(cnta>cntb){
        cout<<"Anton";
    }
    else if(cnta<cntb){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}