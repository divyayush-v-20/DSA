//insert element at bottom of the stack
#include<bits/stdc++.h>
using namespace std;
void print(stack<int>&s){
    if(s.empty()){
        return;
    }
    cout<<s.top()<<endl;
    s.pop();
    print(s);
}
void insertAtBottom(stack<int>&s,int x){
    if(s.empty()){

        s.push(x);
        return;

    }

    int top = s.top();
    s.pop();

    insertAtBottom(s,x);

    s.push(top);

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
    // print(s);
    int x;
    cin>>x;
    insertAtBottom(s,x);
    print(s);
}