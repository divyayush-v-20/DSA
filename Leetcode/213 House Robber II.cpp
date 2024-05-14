class Solution {
public:
    int tabulation(vector<int>& arr){
        int prev2 = 0, prev1 = arr[0];
        for(int i=1;i<arr.size();i++){
            int take = arr[i];
            if(i>1) take+=prev2;
            int leave = prev1;
            int ans = max(take,leave);

            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> arr1,arr2;
        for(int i=0;i<nums.size();i++){
            if(i!=nums.size()-1) arr1.push_back(nums[i]);
            if(i!=0) arr2.push_back(nums[i]);
        }
        return max(tabulation(arr1),tabulation(arr2));
    }
};
