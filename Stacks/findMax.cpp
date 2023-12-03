#include<bits/stdc++.h>
using namespace std;
int findMax(stack<int>&s){
    int m = s.top();
    int top;
    while(!s.empty()){
        top = s.top();

        if(top>=m){
            m=top;
        }

        s.pop();
    }

    return m;
    
}
int main(){
    stack<int> s;
    int size;
    cin>>size;
    for(int i=1;i<=size;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    int ans = findMax(s);
    cout<<ans;
    return 0;
}