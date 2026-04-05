#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x) {
	if(x<2)
		return false;
	for(int i=2; i*i<=x; i++) {
		if(x%i==0)
			return false;
	}
	return true;
}

void solve() {
	int n;
	cin >> n;
	if(isPrime(n)||n==1)
		cout << 1 << "\n";
	else {
		bool ok=0;
		for(int i=2; i*i<=n; i++) {
			if(n%i==0) {
				int j=n/i;
				if(isPrime(i)&&isPrime(j))
					ok=1;
				break;
			}
		}
		if(ok)
			cout << 2 << "\n";
		else
			cout << 3 << "\n";
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
