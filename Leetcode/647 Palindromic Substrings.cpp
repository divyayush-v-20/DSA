class Solution {
public:
    ////i've commented this cuz memory limit was exceeding by using a vector to store all the substrings
    // void getAllSubstrings(string& s,vector<string>& vec){
    //     for(int i=1;i<=s.size();i++){
    //         for(int j=0;j<=s.size()-i;j++){
    //             string tmp = s.substr(j,i);
    //             vec.push_back(tmp);
    //         }
    //     }
    // }
    bool isPalindrome(string& s){
        int l=0,h=s.size()-1;
        while(l<=h){
            if(s[l]!=s[h]) return false;
            else{
                l++;
                h--;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        // vector<string> vec;
        // getAllSubstrings(s,vec); 
        int cnt = 0;
        string tmp;
        for(int i=1;i<=s.size();i++){
            for(int j=0;j<=s.size()-i;j++){
                tmp = s.substr(j,i);
                if(isPalindrome(tmp)) cnt++;
            }
        }
        return cnt;
    }
};
