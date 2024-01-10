class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums) mp[i]++;
        int ans = -1,x;
        for(auto i:mp){
            if(i.second>=ans){
                ans = i.second;
                x=i.first;
            }
        }
        return x;
    }
};
