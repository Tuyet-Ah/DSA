#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    stack<int> st;
    st.push(-1); 
    int length_h = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i); 
        } else {
            st.pop(); 
            if (!st.empty()) {
                length_h = max(length_h, i - st.top()); 
            } else {
                st.push(i); 
            }
        }
    }

    cout << length_h << '\n';
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
