class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> mp;
        int pos = 0;
        for(auto i:nums){
            if(i>=0) pos++;
        }
        for(int i=1;i<=pos;i++){
            mp.insert({i,0});
        }
        for(auto i:nums){
            if(i>=0){
                mp[i]++;
            }
        }
        int ans = -1;
        for(auto i:mp){
            if(i.second==0) {
                ans = i.first;
                break;
            }
        }
        if(ans!=-1) return ans;
        return pos+1;
    }
};
