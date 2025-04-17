#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    stack<string> st;
    for(int i = s.size()-1; i>= 0;i--)
    {
        if(isalpha(s[i]))
        {
            string tmp ="";
            tmp += s[i];
            st.push(tmp);
        }
        else
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string tmp = '(' + s1 + s[i] + s2 +')';
            st.push(tmp);
        }
    }
    cout << st.top() <<"\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}