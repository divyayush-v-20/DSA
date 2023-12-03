#include<bits/stdc++.h>
using namespace std;
int balanced(char a,char b){
  if (a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b== ']' ) {
      return 1;
  }
  return 0;
}

bool isValidParenthesis(string expression)

{
    stack<char> s;

    for(int i=0;i<expression.length();i++){

        char ch = expression[i];

        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }

        else{
            
            if(!s.empty()){
                char top = s.top();
                if(balanced(top,ch)){
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

    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
    
}
int main(){
    string parentheses;
    cin>>parentheses;
    if(isValidParenthesis(parentheses)){
        cout<<"VALID"<<endl;
    }
    else{
        cout<<"INVALID"<<endl;
    }
}