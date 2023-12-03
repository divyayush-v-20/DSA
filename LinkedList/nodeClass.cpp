#include<iostream>
using namespace std;
//node class
class node{
    public:
    int d;
    node* next;
    node (int d){
        this -> d = d;
        this -> next = NULL;
    }
};
//printing a linked list
void print(node* &head){
    node* t = head;
    while(t!=NULL){
        cout<<t -> d<<" ";
        t = t -> next;
    }
    cout<<endl;
}