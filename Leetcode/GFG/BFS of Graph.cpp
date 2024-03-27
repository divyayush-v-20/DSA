class Solution{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool hash[V] = {false};
        queue<int> q;
        hash[0] = true;
        q.push(0);
        vector<int> ans;
        while(q.size()){
            int tmp = q.front();
            q.pop();
            for(auto node:adj[tmp]){
                if(!hash[node]){
                    hash[node] = true;
                    q.push(node);
                }
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};
