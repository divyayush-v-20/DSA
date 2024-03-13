class Solution {
public:
    int dist(vector<int>& v1){
        return (v1[0]*v1[0] + v1[1]*v1[1]);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>> q;
        // for(auto i:points){
        //     q.push({dist(i),i});
        // }
        // vector<vector<int>> ans;
        // while(k--){
        //     ans.push_back(q.top().second);
        //     q.pop();
        // }
        // return ans;
        priority_queue<pair<int,pair<int,int>>> q;
        for(auto i:points){
            int d = dist(i);
            q.push({d,{i[0],i[1]}});
            if(q.size()>k) q.pop();
        }
        vector<vector<int>> ans;
        while(!q.empty()){
            ans.push_back({q.top().second.first,q.top().second.second});
            q.pop();
        }
        return ans;
    }
};
