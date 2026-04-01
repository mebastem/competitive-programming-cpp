class Solution {
public:
    bool isPalindrome(string s) {
		bool ok=1;
		transform(s.begin(), s.end(), s.begin(), ::tolower); // easily transform whole string
		auto f=[](char c) {
			return !((c>='a'&&c<='z')||(c>='0'&&c<='9'));
		};
        s.erase(remove_if(s.begin(), s.end(), f), s.end()); // delete all appearances of the non 'a' => 'z' chars.
        int n=s.size();
		for(int i=0; i<n/2; i++) {
			if(s[i]!=s[n-i-1]) {
				ok=0;
				return ok;
			}
		}
		return ok;
    }
};
