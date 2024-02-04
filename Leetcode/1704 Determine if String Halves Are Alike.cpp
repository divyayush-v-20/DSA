class Solution {
public:
    bool isVowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' 
        || c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    }
    bool halvesAreAlike(string s) {
        int len = s.size();
        int n = len/2;
        int v1=0,v2=0;
        for(int i=0;i<n;i++){
            if(isVowel(s[i])) v1++;
            if(isVowel(s[len-i-1])) v2++;
        }
        return (v1==v2);
    }
};
