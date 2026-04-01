#include <bits/stdc++.h>
using namespace std;

// so the main idea was every element except the max element of the array must not have a duplicate.

void solve() {
	int n;
	cin >> n;
	vector<int> vt(n);
	for(int i=0; i<n; i++)
		cin >> vt[i];
	sort(vt.begin(), vt.end());
	int mx=vt[n-1];
	for(int i=1; i<n; i++) {
		if(vt[i]==vt[i-1]&&vt[i]!=mx) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
