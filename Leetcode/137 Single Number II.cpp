#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        for(auto a:nums){
            mp[a]++;
        }
        int ans;
        for(auto a:mp){
            if(a.second==1){
                ans = a.first;
            }
        }
        return ans;
    }
};