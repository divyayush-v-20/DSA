class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int tmp[rows][cols];
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                tmp[i][j] = matrix[j][i];
            }
        }
        for(int i=0;i<rows;i++){
            int s=0,e=cols-1;
            while(s<=e){
                swap(tmp[i][s],tmp[i][e]);
                s++;
                e--;
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                matrix[i][j] = tmp[i][j];
            }
        }
    }
};