class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // //o(n) space o(n) time
        // map<int,int> mp;
        // int pos = 0;
        // for(auto i:nums){
        //     if(i>=0) pos++;
        // }
        // for(int i=1;i<=pos;i++){
        //     mp.insert({i,0});
        // }
        // for(auto i:nums){
        //     if(i>=0){
        //         mp[i]++;
        //     }
        // }
        // int ans = -1;
        // for(auto i:mp){
        //     if(i.second==0) {
        //         ans = i.first;
        //         break;
        //     }
        // }
        // if(ans!=-1) return ans;
        // return pos+1;
        // o(1) space o(n) time
        int n = nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]>0 && nums[i]<=n && nums[i]!=nums[nums[i] - 1]){
                swap(nums[i],nums[nums[i] - 1]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) return i+1;
        }
        return n+1;
        
    }
};
