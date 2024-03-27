class Solution {
    private:
        void dfs(int node,vector<int> adj[],vector<bool>& hash,vector<int>& ans){
            hash[node] = true;
            ans.push_back(node);
            for(auto i:adj[node]){
                if(!hash[i]) dfs(i,adj,hash,ans);
            }
        }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<bool> hash(V,false);
        int startNode = 0;
        dfs(startNode,adj,hash,ans);
        return ans;
    }
};
