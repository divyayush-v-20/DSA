class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m1;
        for(char c:s){
            m1[c]++;
        }
        vector<pair<int,char>> vec;
        for(auto i:m1){
            vec.push_back({i.second,i.first});
        }
        sort(vec.begin(),vec.end());
        string ans = "";
        for(auto a:vec){
            for(int i=0;i<a.first;i++){
                ans+=a.second;
            }
        }
        int l=0,h=ans.size()-1;
        while(l<=h) swap(ans[l++],ans[h--]);
        return ans;
    }
};
