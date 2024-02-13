class Solution {
public:
    bool isPalindromic(string& str){
        int l=0,h=str.size()-1;
        while(l<=h){
            if(str[l]!=str[h]) return false;
            l++;
            h--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string s:words){
            if(isPalindromic(s)) return s;
        }
        return "";
    }
};
