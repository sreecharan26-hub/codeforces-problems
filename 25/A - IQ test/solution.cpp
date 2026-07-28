#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int>v(n);
    for(auto &i : v){
        cin>>i;
    }
    int ocnt = 0;
    int ecnt = 0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            ecnt++;
        }
        else{
            ocnt++;
        }
    }
    if(ecnt==1){
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                cout<<i+1;
                break;
            }
        }
    }
    if(ocnt==1){
        for(int i =0;i<n;i++){
            if(v[i]%2!=0){
                cout<<i+1;
                break;
            }
        }
    }
    
}