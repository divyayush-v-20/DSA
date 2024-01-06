class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int l = i+1,r = nums.size()-1;
            while(l<r){
                int s = nums[i]+nums[l]+nums[r];
                if(s==0){
                    st.insert({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }
                else if(s>0) r--;
                else l++;
            }
        }
        for(auto a:st){
            ans.push_back(a);
        }
        return ans;
    }
};
