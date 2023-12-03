//a doubly linked list contains data and 2 pointers, 1 for next and 1 for previous element's address
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int data){
        this->data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};
int getlength(node* &head){
    int len = 0;
    node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}