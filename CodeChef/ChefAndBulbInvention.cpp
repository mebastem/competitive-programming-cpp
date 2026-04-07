#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
	ll n, p, k;
	cin >> n >> p >> k;
	ll q=n/k; // this will be the count of full groups
	ll r=n%k; // 0 to r-1 groups have q+1 size
	ll pos=p/k; //lastly this represents targer values position in its group so we add it
	ll ans=(p%k)<r?(p%k)*(q+1):(r*(q+1))+((p%k)-r)*q;
	cout << ans+pos+1 << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
