#include <bits/stdc++.h>
using namespace std;

void solve(string shots) {
		int sa=0, sb=0, ra=5, rb=5;
		for(int i=0; i<10; i++) {
			if(i%2==0) {
				sa+=(shots[i]=='1');
				ra--;
			}
			else {
				sb+=(shots[i]=='1');
				rb--;
			}
			if(sa>sb+rb) {
				cout << "TEAM-A " << i+1 << "\n";
				return;
			}
			if(sb>sa+ra) {
				cout << "TEAM-B " << i+1 << "\n";
				return;
			}
		}
		for(int i=10; i<20; i+=2) {
			sa+=(shots[i]=='1');
			sb+=(shots[i+1]=='1');
			if(sa>sb) {
				cout << "TEAM-A " << i+2 << "\n";
				return;
			}
			if(sb>sa) {
				cout << "TEAM-B " << i+2 << "\n";
				return;
			}
		}
		cout << "TIE\n"; 
	}

int main() {
    //ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string shots;
	while(cin >> shots) {
    	solve(shots);
	}
    return 0;
}
