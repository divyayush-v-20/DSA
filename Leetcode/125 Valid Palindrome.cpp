class Solution {
public:
    bool isPalindrome(string str) {
        string tmp = "";
        for(auto c:str){
            if(isalnum(c)){
                tmp+=tolower(c);
            }
        } 
        string rev = "";
        for(int i=tmp.size()-1;i>=0;i--){
            rev+=tmp[i];
        }
        return (rev==tmp);
    }
};