#include<bits/stdc++.h>
using namespace std;
int n, k, ok = 1;
int a[16];
void sinh()
{
	int i = k - 1;
	while(i >= 0 && a[i] == n - k + i + 1)
		i--;
	if(i >= 0)
	{
		a[i]++;
		for(++i; i < k; ++i)
			a[i] = a[i - 1]+ 1;
	}
	else
		ok = 0;
}
int main()
{
	cin >> n >> k;
	for(int i = 0; i < k ; i++)
		a[i] = i + 1;
	string b[n];
	set<string> se;
	string tmp;
	while(n--)
	{
		cin >> tmp;
		se.insert(tmp);
	}
	int pos = 0;
	for(string x : se)
		b[pos++] = x;
	n = se.size();
	while(ok){
        for(int i = 0; i < k; ++i) cout << b[a[i] - 1] << ' ';
        cout << '\n';
        sinh();
    }
}