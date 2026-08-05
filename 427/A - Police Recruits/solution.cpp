#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int off = 0;
    int ans = 0;
 
    while (n--) {
        int x;
        cin >> x;
        
        if(x>0){
           off+=x; 
        }
        else{
            if(off>0){
                off--;
            }
            else{
                ans++;
            }
        }
        
    }
    cout<<ans;
    return 0;
}