#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    stack<string> st; // luu cac bieu thuc trung gian
    for(int i = s.size()-1; i>= 0;i--) // duyet tu phai sang trai
    {
        if(isalpha(s[i])) // neu ki tu la chu cai
        {
            string tmp =""; // tao chuoi ki tu moi
            tmp += s[i];
            st.push(tmp);
        }
        else // neu ki tu khong phai chu cai
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