class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        ////44/53 TLE with below approach
        // char db[26];
        // char st = 'a';
        // for(int i=0;i<26;i++){
        //     db[i] = st;
        //     st++;
        // }
        // int in = 0;
        // string tmp = "";
        // for(int i=0;i<shifts.size();i++){
        //     tmp+=s[in++];
        //     for(int j=0;j<tmp.size();j++){
        //         tmp[j] = db[(tmp[j] - 'a' + shifts[i])%26];
        //     }
        // }
        // return tmp;
        long sh = 0;
        for(int i=shifts.size()-1;i>=0;i--){
            sh = (sh+shifts[i])%26;
            s[i] = 'a' + (s[i] - 'a' + sh)%26;
        }
        return s;
    }
};
