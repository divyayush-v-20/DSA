class Solution {
public:
    int firstOcc(vector<int>& nums,int t){
        int ans = -1;
        int l = 0,r = nums.size()-1,m;
        while(l<=r){
            m=l+(r-l)/2;
            if(nums[m]==t){
                ans = m;
                r = m-1;
            }
            else if(nums[m]>t){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
    int lastOcc(vector<int>& nums,int t){
        int ans = -1;
        int l = 0,r = nums.size()-1,m;
        while(l<=r){
            m=l+(r-l)/2;
            if(nums[m]==t){
                ans = m;
                l=m+1;
            }
            else if(nums[m]>t){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        pair<int,int> p = {-1,-1};
        vector<int> ans;
        p.first = firstOcc(nums,target);
        p.second = lastOcc(nums,target);
        ans.push_back(p.first);
        ans.push_back(p.second);
        return ans;
    }
};
