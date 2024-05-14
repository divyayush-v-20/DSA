class Solution {
public:
    int helper(vector<int>& nums,int ind,vector<int>& dp){
        // tc->o(n) sc->o(n)
        if(ind==0) return nums[ind];
        if(ind<0) return 0;

        if(dp[ind]!=-1) return dp[ind];

        int p = nums[ind] + helper(nums,ind - 2,dp);
        int np = 0 + helper(nums,ind - 1,dp);

        return dp[ind] = max(p,np);
    }
    int tabulation(vector<int>& nums){
        // tc->o(n)  sc->o(1)
        int prev2 = 0;
        int prev1 = nums[0];
        for(int i=1;i<nums.size();i++){
            int p = nums[i];
            if(i>1) p+=prev2;
            int np = prev1;
            int cur = max(p,np);

            prev2 = prev1;
            prev1 = cur;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        // vector<int> dp(nums.size()+1,-1);
        // return helper(nums,nums.size()-1,dp);
        return tabulation(nums);
    }
};
