#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k, s;
	cin >> n >> k >> s;
	if(k>n) {
		cout << -1 << "\n";
		return;
	}
	// for sundays we must 7*k chocolates and we can have 6*n chocolates.
	if(7*k>6*n&&s>=7) {
		cout << -1 << "\n";
		return;
	}
	cout << ceil((double)s*k/n) << "\n"; 
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
