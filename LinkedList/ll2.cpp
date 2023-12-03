//deletion
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~node(){
        int value = this -> data;
        if(this -> next!=NULL){
            delete next;
            this -> next = NULL;
        }
    }
};
void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}
void deleteNode(node* &head,int posi){
    if(posi==1){
        node* temp = head;
        head = head->next;
        delete temp;
    }else{
        node* curr = head;
        node* prev = NULL;
        int c = 1;
        while(c<posi){
            prev = curr;
            curr = curr ->next;
            c++;
        }
        prev ->next=curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp ->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int n1=1;
    node* node1 = new node(n1);
    node* head = node1;
    node* tail = node1;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    deleteNode(head,2);
    print(head);
}