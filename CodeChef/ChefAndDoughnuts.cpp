#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> vt(m);
	for(int i=0; i<m; i++)
		cin >> vt[i];
	sort(vt.begin(), vt.end());
	int ans=0, g=m-1;
	for(int i=0; i<m; i++) {
		if(vt[i]<g) {
			ans+=vt[i];
			g-=vt[i]+1;
		}
		else {
			ans+=g;
			g=0;
			break;
		}
		if(g<=0)
			break;
	}
	cout << ans << "\n";
}

int main() {
	int t;
	cin >> t;
	while(t--)
		solve();	
}
