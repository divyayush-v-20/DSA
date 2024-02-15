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
    void helper(int& ans,vector<string> osf,int row,int n){
        if(row==n){
            ans++;
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
    int totalNQueens(int n) {
        int ans = 0;
       vector<string> osf(n,string(n,'.'));
       helper(ans,osf,0,n);
       return ans;
    }
};
