class Solution {
public:
    string reorganizeString(string str) {
        int len = str.size();
    vector<int> freq(26,0);
    for(int i=0;i<len;i++){
        freq[str[i] - 'a']++;
    }
    //find most freq
    char freq_ele;
    int max = -1;
    for(int i=0;i<26;i++){
        if(freq[i]>=max){
            max = freq[i];
            freq_ele = char(i+'a');
        }
    }
    int in = 0;
    while(max>0 && in<str.size()){
        str[in] = freq_ele;
        max--;
        in+=2;
    }
    if(max!=0) return "";

    freq[freq_ele - 'a'] = 0;
    for(int i=0;i<26;i++){
        while(freq[i]>0){
            if(in>=str.size()){
                in = 1;
            }
            else{
                in = in;
            }
            str[in] = i+'a';
            freq[i]--;
            in+=2;
        }
    }
    return str;
    }
};
