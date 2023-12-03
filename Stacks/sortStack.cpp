#include<bits/stdc++.h>
using namespace std;
void print(stack<int>&s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
void sortedInsertion(stack<int>&s,int n){
    if(s.empty() || n>s.top()){
        s.push(n);
        return;
    }

    int top = s.top();
    s.pop();

    sortedInsertion(s,n);

    s.push(top);
}
void sort(stack<int>&s){
    if(s.empty()){
        return;
    }

    int num = s.top();
    s.pop();

    sort(s);

    sortedInsertion(s,num);
}
int main(){
    stack<int> s;
    int size;
    cin>>size;
    for(int i=1;i<=size;i++){
        int ele;
        cin>>ele;
        s.push(ele);
    }
    sort(s);
    print(s);
}
//Approach 1: Using Recursion
