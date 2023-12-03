#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int* arr;
    int size;
    int top;

    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    //operations
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peak(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    int n;
    cin>>n;
    Stack st(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    cout<<st.peak()<<endl;
    cout<<st.isEmpty()<<endl;
}