class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size();
        while(l<h){
            int m = l+(h-l)/2;
            if(nums[m]==target) return m;
            if(nums[m]>target) h=m;
            else l=m+1;
        }
        return l;
    }
};
