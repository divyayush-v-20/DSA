//reverse a string using stack
#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<char> s;

    string str;
    cin>>str;

    for(int i=0;i<str.length();i++){

        s.push(str[i]);

    }

    string ans = "";

    while(s.empty()==0){

        ans.push_back(s.top());

        s.pop();

    }

    cout<<ans<<endl;

    return 0;
}