class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int len = nums.size();
        if(len<=1) return 0;
        if(nums[1]<nums[0]) return 0;
        if(nums[len-2]<nums[len-1]) return len-1;
        int l = 1,r = len-2,m;
        while(l<=r){
            m=l+(r-l)/2;
            if(nums[m]>nums[m-1] && nums[m]>nums[m+1]) return m;
            if(nums[m]>nums[m-1]) l=m+1;
            else r=m-1;
        }
        return -1;
    }
};
