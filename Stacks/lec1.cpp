#include<iostream>
#include<stack>
using namespace std;
int main() {

    //creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);
    s.push(4);
    // cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    //pop operation: removes the top element
    s.pop();
    // cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    return 0;
}