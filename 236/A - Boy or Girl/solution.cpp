#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto i : s){
        mp[i]++;
    }
    if(mp.size()%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}