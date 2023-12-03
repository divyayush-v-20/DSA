#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void append(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void printLL(node* &head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
//recursive approach
void reverseLL(node* &head,node* &prev,node* &curr){
    if(curr==NULL){
        head = prev;
        return;
    }
    node* forward = curr->next;
    reverseLL(head,curr,forward);
    curr->next = prev;
}
int main(){
    int len;
    cin>>len;
    int data;
    int n1;
    cin>>n1;
    node* head = new node(n1);
    node* tail = head;
    len--;
    while(len--){
        cin>>data;
        append(tail,data);
    }
    node* prev = NULL;
    node* curr = head;
    reverseLL(head,prev,curr);
    printLL(head);
}
