#include <bits/stdc++.h>
using namespace std;

// if adjacent same pair size is bigger than 2 or count of red and greens are not equal we output no!

void solve() {
	string s;
	cin >> s;
	int r=0, g=0, p=0;
	for(int i=0; i<s.size(); i++) {
		if(s[i]=='R')
			r++;
		else
			g++;
		if(i>0)
			if(s[i]==s[i-1])
				p++;
	}
	if(s.size()>2&&s[0]==s[s.size()-1]) // if size>2
		p++;
	if(s.size()%2!=0||r!=g||p>2) { // if string size is odd its impossible
		cout << "no\n";
		return;
	}
	else {
		cout << "yes\n";
		return;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--)
		solve();
}
