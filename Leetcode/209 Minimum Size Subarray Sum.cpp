class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mn = nums.size()+1;
        int st=0,en=0;
        int sum=0;
        while(en<nums.size()){
            sum+=nums[en];
            while(sum>=target){
                mn = min(mn,en-st+1);
                sum-=nums[st];
                st++;
            }
            en++;
        }
            
        if(mn==nums.size()+1) return 0;
        return mn;
    }
};
