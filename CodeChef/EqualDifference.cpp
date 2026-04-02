#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, ans=0;
	cin >> n;
	vector<int> vt(n);
	for(int i=0; i<n; i++)
		cin >> vt[i];
	map<int, int> mp;
	for(int i=0; i<n; i++){
		int x=vt[i]-i;
		ans+=mp[x];
		mp[x]++;
	}
	cout << ans << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) 
		solve();
}
