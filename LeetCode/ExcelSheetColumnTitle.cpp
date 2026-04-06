class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber) {
            columnNumber--;
            char c='A'+columnNumber%26; // so this will build the string reverse
            ans+=c;
            columnNumber/=26;
        }
        reverse(ans.begin(), ans.end()); // reverse it back to original ans
        return ans;
    }
};
