class Solution {
public:
    vector<int> nextSmaller(vector<int>& arr){
        stack<int> s;
        s.push(-1);
        vector<int> ans(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            while(s.top()!=-1 && arr[s.top()]>=arr[i]) s.pop();
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int> prevSmaller(vector<int>& arr){
        stack<int> s;
        s.push(-1);
        vector<int> ans(arr.size());
        for(int i=0;i<arr.size();i++){
            while(s.top()!=-1 && arr[s.top()]>=arr[i]) s.pop();
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nxt(heights.size());nxt = nextSmaller(heights);
        vector<int> prev(heights.size()); prev = prevSmaller(heights);
        int ans = -1;
        for(int i=0;i<heights.size();i++){
            int len = heights[i];
            if(nxt[i]==-1){
                nxt[i] = heights.size();
            }
            int br = nxt[i]-prev[i]-1;
            ans = max(ans,len*br);
        }
        return ans;
    }
};
