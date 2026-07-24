#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string a = "hello";
    int cnt = 0;
    int j = 0;
    for(int i=0;i<s.size();i++){
        if(j<a.size() and s[i]==a[j]){
            j++;
        }
    }
     if (j == a.size())
        cout << "YES";
    else
        cout << "NO";
    
 
    return 0;
}