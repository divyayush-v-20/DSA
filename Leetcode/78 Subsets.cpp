class Solution {
public:
    void solve(vector<int>& nums,set<vector<int>>&s,vector<int> tmp,int i){
        if(i==nums.size()){
            s.insert(tmp);
            return;
        }
        tmp.push_back(nums[i]);
        solve(nums,s,tmp,i+1);
        tmp.pop_back();
        solve(nums,s,tmp,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>> st;
        vector<int> tmp;
        solve(nums,st,tmp,0);
        vector<vector<int>> ret;
        for(auto v:st){
            ret.push_back(v);
        }
        return ret;
    }
};
