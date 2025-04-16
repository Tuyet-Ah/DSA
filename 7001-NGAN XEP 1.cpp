#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	string s;
	vector<int> luu;
	int n;
	while(cin >> s)
	{
		if(s == "push")
		{
			cin >> n;
			luu.push_back(n);
		}
		else if(s =="pop")
		{
			if(luu.empty())
				cout << "NONE\n";
			else
				luu.pop_back();
		}
		else
		{
			if(luu.empty())
				cout << "NONE\n";
			else
			{
				for(int x : luu)
					cout << x <<" ";
				cout <<"\n";
			}
		}
	}
}