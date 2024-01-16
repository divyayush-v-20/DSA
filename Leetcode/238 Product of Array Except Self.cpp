class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec (n,1);
        for(int i=1;i<n;i++){
            vec[i] = vec[i-1] * nums[i-1];
        }
        int pr = 1;
        for(int i=n-1;i>=0;i--){
            vec[i]*=pr;
            pr*=nums[i];
        }
        return vec;
    }
};
