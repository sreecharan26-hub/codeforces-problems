#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    vector<string>grid(r);
    for(int i=0;i<r;i++){
        cin>>grid[i];
    }
    vector<int>row(r,0);
    vector<int>col(c,0);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(grid[i][j]=='S'){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    int ans = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(row[i]==0 || col[j]==0){
                ans+=1;
            }
        }
    }
    cout<<ans;
    return 0;
    
}