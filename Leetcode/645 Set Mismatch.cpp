class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> freq(nums.size(),0);
        for(int i:nums){
            freq[i-1]++;
        }
        int x,y;
        for(int i=0;i<nums.size();i++){
            if(freq[i]==2) x=i+1;
            if(freq[i]==0) y=i+1;
        }
        return {x,y};
    }
};
