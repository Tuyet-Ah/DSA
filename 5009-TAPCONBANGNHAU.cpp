#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int &x : a)
			cin >> x;
		int sum = 0;
		for(int x : a)
			sum += x;
		if(sum % 2 == 0)
			cout << "YES\n";
		else
			cout <<"NO\n";
	}
}