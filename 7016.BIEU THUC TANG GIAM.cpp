#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void solve(string s) {
    vector<int> res;
    stack<int> st;
    int num = 1;

    for (int i = 0; i <= s.size(); i++) {
       st.push(num++);
       if(s[i] == 'I' || i == s.size())
       {
            while(!st.empty())
            {
                res.push_back(st.top());
                st.pop();
            }   
       }
    }
    for (int x : res) cout << x;
    cout << endl;
}

int main() {
    fast();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
