class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mps, mpt;
        for(int i=0; i<s.size(); i++) {
            char cs=s[i];
            char ct=t[i];
            if(mps.count(cs)) {
                if(mps[cs]!=ct)
                    return false;
            }
            else {
                if(mpt.count(ct))
                    return false;
                mps[cs]=ct, mpt[ct]=cs;
            }
        }
        return true;
    }
};
