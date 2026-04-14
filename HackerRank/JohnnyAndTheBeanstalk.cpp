#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
	ll k;
	cin >> k;
	vector<ll> vt(k);
	for(ll i=0; i<k; i++)
		cin >> vt[i];
	ll s=1;
	for(ll i=0; i<k; i++) {
		if(vt[i]>s) {
			cout << "No\n";
			return;
		}
		s-=vt[i];
		s*=2;
	}
	s/=2;
	if(s==0){
		cout << "Yes\n";
		return;
	}
	cout << "No\n";
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
