#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		vector<ll>v;
		for(ll i=0; i<n; i++) {
			ll x;
			cin>>x;
			if(x!=0) {
				v.push_back(x);
			}
		}
		sort(v.begin(),v.end());
		ll x=0,y=0;
		for(ll i=0; i<v.size(); i+=2) {
			x=x*10+v[i];
		}
		for(ll i=1; i<v.size(); i+=2) {
			y=y*10+v[i];
		}
		cout<<x+y<<endl;
	}
}