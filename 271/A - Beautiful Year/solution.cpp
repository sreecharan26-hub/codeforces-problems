#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    while (true) {
        n++;
        string s = to_string(n);
 
        unordered_set<char> st(s.begin(), s.end());
 
        if (st.size() == 4) {
            cout << n;
            break;
        }
    }
 
    return 0;
}