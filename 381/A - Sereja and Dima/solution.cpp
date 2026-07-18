#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int s1 =0;
    int s2=0;
    int i =0;
    int j = n-1;
    bool t = false;
    int x= 0;
    while(i<=j){
        if(nums[i]<=nums[j]){
            x=nums[j];
            j--;
        }
        else{
            x=nums[i];
            i++;
        }
        if(t){
            s1+=x;
        }else{
            s2+=x;
        }
        t=!t;
    }
    cout<<s2<<" "<<s1;
    return 0;
}