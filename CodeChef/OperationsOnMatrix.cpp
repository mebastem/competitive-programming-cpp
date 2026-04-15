#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve() {
	ll n, m, q;
	cin >> n >> m >> q;
	vector<ll> rc(n), cc(m);
	ll re=0, ro=0, ce=0, co=0;
	for(ll i=0; i<q; i++) {
		ll x, y;
		cin >> x >> y;
		rc[x-1]++;
		cc[y-1]++;
	}
	for(ll i=0; i<n; i++) {
		if(rc[i]%2==0)
			re++;
		else
			ro++;
	}
	for(ll i=0; i<m; i++) {
		if(cc[i]%2==0)
			ce++;
		else
			co++;
	}
	ll ans=(re*co)+(ro*ce);
	cout << ans << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
