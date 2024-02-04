class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0;
        int r = mat.size();
        for(int i=0;i<r;i++) s+=mat[i][i];
        //secondary diagonal -> i+j=n-1
        int col = r-1;
        for(int i=0;i<r;i++) s+=mat[i][col--];
        if(r%2==1) s-=mat[r/2][r/2]; //bcz diagonals intersect in odd row square matrix
        return s;
    }
};
