class Solution {
public:
    void dfs(int node,vector<vector<int>>& mat,vector<int>& vis){
        vis[node] = 1;
        for(int i=0;i<mat.size();i++){
            if(!vis[i] && mat[node][i]==1){
                dfs(i,mat,vis);
            }
        }
    }
    void bfs(int node,vector<vector<int>>& mat,vector<int>& vis){
        queue<int> q;
        q.push(node);
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(int i=0;i<mat.size();i++){
                if(!vis[i] && mat[cur][i]){
                    q.push(i);
                    vis[i] = 1;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        int V = isConnected.size();
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                ans++;
                //dfs(i,isConnected,vis);
                bfs(i,isConnected,vis);
            }
        }
        return ans;
    }
};
