class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long s = 0,ans = 0,n = nums.size();
        map<int,int> mp;
        for(int i=0;i<k-1;i++){
            s+=nums[i];
            mp[nums[i]]++;
        }
        for(int i=k-1;i<n;i++){
            mp[nums[i]]++;
            s+=nums[i];
            if(mp.size()==k) ans = max(ans,s);

            if(mp[nums[i-k+1]]==1) mp.erase(nums[i-k+1]);
            else mp[nums[i-k+1]]--;

            s-=nums[i-k+1];
        }
        return ans;
    }
};
