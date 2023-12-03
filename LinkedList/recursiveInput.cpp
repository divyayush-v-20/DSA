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
void createList(node* &head){
    int d;
    cin>>d;
    head = new node(d);

    if(d==-1){
        return;
    }

    createList(head->next);

}
void printList(node* head){
    node* curr = head;
    while(curr->data!=-1){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}
int main(){
    node* head = NULL;
    createList(head);
    printList(head);
    cout<<head->data<<endl;
    head = head->next;
    cout<<head<<endl;
}