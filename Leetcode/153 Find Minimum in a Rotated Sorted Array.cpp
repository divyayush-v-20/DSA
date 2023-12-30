class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<=nums[nums.size()-1]){
            return nums[0];
        }
        int s=0,e=nums.size()-1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(m-1>=0 && nums[m]<nums[m-1]){
                return nums[m];
            }
            else if(nums[m]>nums[e]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        return -1;
    }
};