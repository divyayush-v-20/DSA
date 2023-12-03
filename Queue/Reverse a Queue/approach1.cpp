#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    int size;
    cin>>size;
    for(int i=1;i<=size;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    stack<int> s;
    //pushing elements from queue to stack
    while(!q.empty()){
        int front = q.front();
        q.pop();
        s.push(front);
    }
    //pushing elements back from stack to queue
    while(!s.empty()){
        int top = s.top();
        s.pop();
        q.push(top);
    }
    //printing
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}