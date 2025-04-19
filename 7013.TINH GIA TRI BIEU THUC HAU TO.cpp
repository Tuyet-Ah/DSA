#include<bits/stdc++.h>
using namespace std;

int cal(int a, int b, char x)
{
    switch (x)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
}

void solve()
{
    string s;
    cin >> s;
    stack<int> st;
    for(char &c : s)
    {
        if(isdigit(c))
            st.push(c - '0');
        else
        {
            int s1 = st.top();
            st.pop();
            int s2 = st.top();
            st.pop();
            st.push(cal(s2, s1, c));
        }
    }
    cout << st.top() << "\n";
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        solve();
    }
}