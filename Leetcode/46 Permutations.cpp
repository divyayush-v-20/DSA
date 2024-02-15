class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>& ans,vector<int> tmp,int* freq){
        if(tmp.size()==nums.size()){
            ans.push_back(tmp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                freq[i] = 1;
                tmp.push_back(nums[i]);
                solve(nums,ans,tmp,freq);
                freq[i] = 0;
                tmp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int freq[nums.size()];
        vector<int> tmp;
        for(int i=0;i<nums.size();i++) freq[i] = 0;
        solve(nums,ans,tmp,freq);
        return ans;
    }
};
