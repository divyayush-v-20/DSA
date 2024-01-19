class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(128,0);
        int l=0,r=0,ans=0;
        while(r<s.size()){
            if(freq[s[r] - '\0']+1>1){
                freq[s[l] - '\0']--;
                l++;
            }
            else{
                freq[s[r] - '\0']++;
                ans = max(ans,r-l+1);
                r++;
            }
        }
        return ans;
    }
};
