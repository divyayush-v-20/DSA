class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> vec;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                vec.push_back(matrix[i][j]);
            }
        }
        sort(vec.begin(),vec.end());
        return vec[k-1];
    }
};