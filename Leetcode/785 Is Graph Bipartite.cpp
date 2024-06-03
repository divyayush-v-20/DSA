class Solution {
public:
    bool dfs(int cur,bool color,vector<int>& colored,vector<vector<int>>& graph){
        colored[cur] = color;
        for(int i=0;i<graph[cur].size();i++){
            if(colored[graph[cur][i]]==-1){
                if(dfs(graph[cur][i],!color,colored,graph)==false){
                    return false;
                }
            }
            else if(colored[graph[cur][i]]==color){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> colored(V,-1);
        for(int i=0;i<V;i++){
            if(colored[i]==-1){
                if(!dfs(i,false,colored,graph)){
                    return false;
                }
            }
        }
        return true;
    }
};
