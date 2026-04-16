#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
	ll n, k, l;
	cin >> n >> k >> l;
	ll ans=0;
	if(k+l>n) // no middle node
		ans=(n-k)*(n-l);
	else {
		// if k+l<n then k of the nodes are source, l of them are sink so n-k-l middle nodes left.
		ll mid=n-k-l;
		ans=k*mid+l*mid+k*l; //k*mid = sources->middles, l*mid = sinks->middles, k*l = sources->sinks
		ans+=mid*(mid-1)/2; // lastly middles to middles
	}
	cout << ans << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while(t--) {
		solve();
	}
}
