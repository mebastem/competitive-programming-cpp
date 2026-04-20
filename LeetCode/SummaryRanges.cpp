class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for(int i=0; i<nums.size(); i++) {
            int s=i;
            while(i+1<nums.size()&&nums[i]+1==nums[i+1])
                i++;
            if(s==i)
                ans.push_back(to_string(nums[s]));
            else {
                ans.push_back(to_string(nums[s])+"->"+to_string(nums[i]));
            }
        }
        return ans;
    }
};
