#include <bits/stdc++.h>
using namespace std;

// have no idea how this works >->

void solve() {
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	if(n==2)
		cout << "NO\n";
	else if(arr[n-1]!=arr[n-2]){
		if(arr[0]==arr[n-2])
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	else {
		if(arr[n/2-1] == arr[n-1])
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
