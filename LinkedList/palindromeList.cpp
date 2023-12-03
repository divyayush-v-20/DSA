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
void append(node* head,int data){
    node* newNode = new node(data);
    head->next = newNode;
    head = newNode;
}
void printList(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    int size;
    cin>>size;
    int d1;
    cin>>d1;
    node* node1 = new node(d1);
    node* head = node1;
    int dn;
    size--;
    while(size--){
        cin>>dn;
        append(head,dn);
    }
    printList(head);
}