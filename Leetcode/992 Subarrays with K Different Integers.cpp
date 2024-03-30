class Solution {
public:
#define unmp unordered_map
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
    }
    int helper(vector<int>& nums,int k){
        unmp<int,int> freq;
        int ans = 0,i = 0,j = 0;
        while(j<nums.size()){
            freq[nums[j]]++;
            while(i<=j && freq.size()>k){
                if(--freq[nums[i]]==0) freq.erase(nums[i]);
                i++;
            }
            ans+=(j-i+1);
            j++;
        }
        return ans;
    }
};
