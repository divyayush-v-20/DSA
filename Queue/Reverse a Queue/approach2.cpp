//using recursion
#include<bits/stdc++.h>
using namespace std;
void reverse(queue<int>&q){
    if(q.empty()){
        return;
    }
    else{
        int front = q.front();
        q.pop();
        reverse(q);
        q.push(front);
    }
}
int main(){
    queue<int> q;
    int size;
    cin>>size;
    while(size--){
        int x;
        cin>>x;
        q.push(x);
    }
    reverse(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}