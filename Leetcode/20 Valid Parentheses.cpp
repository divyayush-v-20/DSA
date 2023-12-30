class Solution {
public:
    bool isValid(string str) {
        stack<int> s;
        for(auto c:str){
            if(c=='(' || c=='{' || c=='['){
                s.push(c);
            }
            else{
                if(!s.empty()){
                    char t = s.top();
                    if((t=='(' && c==')') ||(t=='{' && c=='}') || (t=='[' && c==']')){
                        s.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        return (s.empty());
    }
};