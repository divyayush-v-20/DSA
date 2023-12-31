class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int a:nums) mp[a]++;
        int m ,x;
        vector<pair<int,int>> v;
        for(auto a:mp){
            v.push_back({a.second,a.first});
        }        
        sort(v.begin(),v.end());
        int s = v.size();
        vector<int> ans;
        int in = v.size()-k;
        for(int i=s-1;i>=in;i--){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
