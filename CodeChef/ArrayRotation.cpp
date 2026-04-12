#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MOD = 1e9+7;

int main() {
	ll ans=0, n, q;
	cin >> n;
	vector<ll> vt(n);
	for(ll i=0; i<n; i++) {
		cin >> vt[i];
		ans=(ans+vt[i])%MOD;
	}
	if(ans<0)
		ans+=MOD;
	cin >> q;
	while(q--) {
		int x;
		cin >> x;
		// basically every query means multiply with 2 cuz elements are still same so sum of them is always same.
		ans=(ans*2)%MOD;
		cout << ans << "\n";
	}
	return 0;
}
