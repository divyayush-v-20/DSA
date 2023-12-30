class Solution {
public:
    void help(int n,int o,int c,vector<string> &ans,string tmp ){
        if(o==c && o==n){
            ans.push_back(tmp);
            return;
        }
        if(o<n){
            help(n,o+1,c,ans,tmp+"(");
        }
        if(c<o){
            help(n,o,c+1,ans,tmp+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        help(n,0,0,ans,"");
        return ans;
    }
};