class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> vis(n,vector<int>(m,0));
        vis[sr][sc] = 1;
        q.push({sr,sc});
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        vector<vector<int>> ans(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j] = image[i][j];
            }
        }
        ans[sr][sc] = color;
        while(q.size()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
                && !vis[nrow][ncol] && image[nrow][ncol] == image[row][col]
                ){
                    q.push({nrow,ncol});
                    vis[nrow][ncol] = 1;
                    ans[nrow][ncol] = color;
                }
            }
        }
        return ans;
    }
};
