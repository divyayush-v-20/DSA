class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<bool> row(r,true);
        vector<bool> col(c,true);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    row[i] = false;
                    col[j] = false;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(row[i]==0 || col[j]==0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
