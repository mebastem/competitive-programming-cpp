class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, k=INT_MAX;
        for(int i=0; i<prices.size(); i++) {
            if(k>prices[i]) {
                k=prices[i];
            }
            ans = max(ans, prices[i]-k);
        }
        return ans;
    }
};
