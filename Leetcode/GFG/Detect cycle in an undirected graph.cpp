class Solution {
  private:
    bool helper(int node,int vis[],vector<int> adj[]){
        queue<pair<int,int>> q;
        q.push({node,-1});
        vis[node] = 1;
        while(q.size()){
            int fr = q.front().first;
            int par = q.front().second;
            q.pop();
            for(auto it:adj[fr]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push({it,fr});
                }
                else if(vis[it] && it!=par){
                    return true;
                }
            }
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(helper(i,vis,adj)){
                    return true;
                }
            }
        }
        return false;
    }
};
