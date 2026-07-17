#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a, b;
    cin >> a >> b;
    for(int i=0;i<a.size();i++){
        cout<<char(((a[i]-'0')^(b[i]-'0'))+'0');
    }
    return 0;
}