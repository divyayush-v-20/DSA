class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        int left = 1, right = n-2,mid;
        while(left<=right){
            mid = left + (right-left)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) //single element found
                return nums[mid];
            if(mid%2==1 && nums[mid]==nums[mid - 1] || mid%2==0 && nums[mid]==nums[mid+1]){ // eliminate left half
                left = mid + 1;
            }
            else{ //eliminate right half
                right = mid - 1;
            }
        }
        return -1;
    }
};
