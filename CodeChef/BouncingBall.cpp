#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	ll n;
	cin >> n;
	vector<ll> ls(n, 0), rs(n, 0), arr(n);
	for(ll i=0; i<n; i++)
		cin >> arr[i];
	for(ll i=1; i<n; i++)
		ls[i]=ls[i-1]+arr[i-1];
	for(ll i=n-2; i>=0; i--)
		rs[i]=rs[i+1]+arr[i+1];
	ll ans=0;
	for(ll i=0; i<n; i++) {
		if(arr[i]==0) {
			if(ls[i]==rs[i]||ls[i]==rs[i]+1)
				ans++;
			if(rs[i]==ls[i]||rs[i]==ls[i]+1)
				ans++;
		}
	}
	cout << ans << "\n";
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
