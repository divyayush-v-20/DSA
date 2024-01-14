class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        sort(strs.begin(),strs.end());
        string l = strs[0],
        h = strs[strs.size()-1];
        /*check first & last, bcz after sorting lexicographically, the first and last will have most differences*/
        for(int i=0;i<min(l.length(),h.length());i++){
            if(l[i]!=h[i]) return s;
            
            s+=l[i];
        }
        return s;
    }
};
