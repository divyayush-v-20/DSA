class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowHash[9][9] = {0};
        int colHash[9][9] = {0};     
        int boxHash[9][9] = {0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int n = board[i][j] - '0';
                    int k = (i/3)*3 + (j/3);

                    if(rowHash[i][n-1]++ || colHash[j][n-1]++ || boxHash[k][n-1]++){
                        return false;
                    }
                }
            }
        }
        return true;   
    }
};
