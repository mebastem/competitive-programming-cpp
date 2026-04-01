#include <bits/stdc++.h>
using namespace std;

void solve() {
	int ans=0, n, k;
	vector<int> vt;
	cin >> n >> k;
	vector<int> a(n), b(n);
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<n; i++)
		cin >> b[i];
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			int mx=max(a[i], a[j]); // find which one is bigger and smaller
			int mn=min(a[i], a[j]);
			int disc=min(mx/2, 100);
			int cost=mn+mx-disc;
			if(cost<=k)
				ans=max(ans, b[i]+b[j]);
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
