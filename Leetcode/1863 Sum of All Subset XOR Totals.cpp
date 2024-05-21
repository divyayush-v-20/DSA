class Solution {
public:
    void getSubsets(vector<int>& arr,vector<vector<int>>& mat,vector<int> tmp,int i=0){
        if(i>=arr.size()){
            mat.push_back(tmp);
            return;
        }
        tmp.push_back(arr[i]);
        getSubsets(arr,mat,tmp,i+1);
        tmp.pop_back();
        getSubsets(arr,mat,tmp,i+1);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int> tmp;
        getSubsets(nums,subsets,tmp);
        int sum = 0;
        for(auto vec : subsets){
            int x = 0;
            for(int i : vec){
                x^=i;
            }
            sum+=x;
        }
        return sum;
    }
};
