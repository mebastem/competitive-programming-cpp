#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, ans=0;
	cin >> n;
	vector<int> vt(n);
	for(int i=0; i<n; i++)
		cin >> vt[i];
	int mx = *max_element(vt.begin(), vt.end()), mn=*min_element(vt.begin(), vt.end());
	for(int i=0; i<n; i++) 
		if(vt[i]!=mn&&vt[i]!=mx)
			ans++;
	cout << ans << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
