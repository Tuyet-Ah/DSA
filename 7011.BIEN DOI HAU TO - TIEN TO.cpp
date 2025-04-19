#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void nganxep()
{
    string s;
    cin >> s;
    stack<string> st;
    for(char &c : s)
    {
        if(isalpha(c))
        {
            string tmp ="";
            tmp += c;
            st.push(tmp);
        }
        else
        {
            string s1 = st.top(); st.pop();
            string s2 = st.top(); st.pop();
            string tmp = c + s2 + s1;
            st.push(tmp);
        }
    }
    cout << st.top() << endl;
}

int main()
{
    fast();
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        nganxep();
    }
}