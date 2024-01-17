class Solution {
public:
    bool isVowel(char a){
        return (a=='a' || a=='e'|| a=='i'|| a=='o'||a=='u'||
        a=='A' || a=='E' || a=='I' || a=='O' || a=='U'
        );
    }
    string sortVowels(string s) {
        vector<char> v;
        for(auto i:s){
            if(isVowel(i)) v.push_back(i);
        }
        sort(v.begin(),v.end());
        int j = 0;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i] = v[j++];
            }
        }
        return s;
    }
};
