class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        pair<int,int> p;
        p.first = -1;
        p.second = -1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                p.first = i;
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                p.second = i;
            }
        }
        ans.push_back(p.first);
        ans.push_back(p.second);
        return ans;
    }
};