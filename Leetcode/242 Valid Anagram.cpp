class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> v1,v2;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            v1.push_back(s[i]);
            v2.push_back(t[i]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
    }
};