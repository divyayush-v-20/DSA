class Solution {
public:
    bool isSafe(vector<string> &osf,int row,int col,int n){
        for(int i=0;i<=row;i++){
            if(osf[i][col]=='Q') return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(osf[i][j]=='Q') return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            if(osf[i][j]=='Q') return false;
        }
        return true;
    }
    void helper(vector<vector<string>>& ans,vector<string> osf,int row,int n){
        if(row==n){
            ans.push_back(osf);
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(osf,row,col,n)){
                osf[row][col] = 'Q';
                helper(ans,osf,row+1,n);
                osf[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
       vector<vector<string>> ans; 
       vector<string> osf(n,string(n,'.'));
       helper(ans,osf,0,n);
       return ans;
    }
};
