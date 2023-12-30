
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int tmp[n][n];
        int top = 0,bottom = n-1,left = 0,right = n-1;
        int ele = 1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                tmp[top][i] = ele++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                tmp[i][right] = ele++; 
            }
            right--;
            for(int i=right;i>=left;i--){
                tmp[bottom][i] = ele++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                tmp[i][left] = ele++;
            }
            left++;
        }
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            vector<int> row;
            for(int j=0;j<n;j++){
                row.push_back(tmp[i][j]);
            }
            ans.push_back(row);
        }
        return ans;
    }
};