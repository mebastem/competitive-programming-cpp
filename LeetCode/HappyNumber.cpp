class Solution {
public:
    bool isHappy(int n) {
        set<int> st;
        while(n!=1&&st.count(n)==0) {
            st.insert(n);
            int s=0;
            while(n) {
                int x=n%10;
                s+=x*x;
                n/=10;                
            }
            n=s;
        }
        return n==1;
    }
};
