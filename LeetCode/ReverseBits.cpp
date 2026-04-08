class Solution {
public:
    int reverseBits(int n) {
        int ans=0;
        for(int i=0; i<32; i++) {
            int b=n&1; // take last bit
            ans<<=1; // make space for addition
            ans|=b; // adding that bit
            n>>=1; // switching to read the next bit
        }
        return ans;
    }
};
