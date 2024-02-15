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
    void optimizedSolver(vector<int> nums,vector<vector<int>>& ans,int l,int r){
        if(l==r){
            ans.push_back(nums);
            return;
        }
        for(int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            optimizedSolver(nums,ans,l+1,r);
            swap(nums[l],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        // int freq[nums.size()];
        // vector<int> tmp;
        // for(int i=0;i<nums.size();i++) freq[i] = 0;
        // solve(nums,ans,tmp,freq);
        int n = nums.size();
        optimizedSolver(nums,ans,0,n-1);
        return ans;
    }
};
