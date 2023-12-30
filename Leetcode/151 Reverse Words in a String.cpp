#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        s+=" ";
        string tmp =  "";
        vector<string> vec;
        bool flag = false;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                flag = true;
            }
            if(flag){
                if(s[i]==' '){
                    vec.push_back(tmp);
                    tmp = "";
                }
                else{
                    if(s[i]==' '){
                        continue;
                    }
                    if(s[i]!=' '){
                        tmp+=s[i];
                    }
                }
            }
        }
        
        string ans = "";
        int x=0;
        int n = vec.size()-1;
        while(x<=n){
            swap(vec[x++],vec[n--]);
        }
        for(auto a:vec){
            ans+=a;
            ans+=" ";
        }
        string res="";
         flag = false;
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=' ') flag = true;
            if(flag){
                res+=ans[i];
                if(ans[i]==' ' && ans[i+1]==' '){
                    res.pop_back();
                }
            }
        }
        res.pop_back();
        ans.pop_back();
        return res;
    }
};