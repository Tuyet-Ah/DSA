#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	string s;
	vector<int> luu;
	int n;
	while(t--) {
		cin >> s;
		if(s =="PUSH")
		{
			cin >> n;
			luu.push_back(n);
		}
		else if(s =="POP")
		{
			if(!luu.empty())
				luu.pop_back();
		}
		else
		{
			if(luu.empty())
				cout <<"NONE\n";
			else
				cout << luu.back() << endl;
		}
	}
}