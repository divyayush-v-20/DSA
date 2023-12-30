class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int> tmp;
        for(int i=0;i<n;i++){
            tmp.push_back(nums[i]);
            if(nums[i]==val){
                tmp.pop_back();
            }
        }
        for(int i=0;i<tmp.size();i++){
            nums[i] = tmp[i];
        }
        return tmp.size();
    }
};