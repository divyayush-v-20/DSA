class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int mx = 0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size() - 1;i>=1;i--){
            mx = max(mx,nums[i] - nums[i-1]);
        }
        return mx;
    }
};
