//reverse a stack without using loops or any additional data structure
#include<bits/stdc++.h>
using namespace std;

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
void reverse(stack<int>&s){

    if(s.empty()){
        return;
    }

    int n = s.top();
    s.pop();

    reverse(s);

    insertAtBottom(s,n);

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
    reverse(s);
    // print(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
    }
}