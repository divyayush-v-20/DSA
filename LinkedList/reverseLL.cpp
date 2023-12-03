#include<iostream>
using namespace std;
class node{
    public:
    node* next;
    int data;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
        int value = this -> data;
        if(this -> next!=NULL){
            delete next;
            this -> next = NULL;
        }
    }
};
void append(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
// void reverse(node* &head){
//     node* prev = NULL;
//     node* curr = head;
//     node* forward=NULL ;
//     while(curr!=NULL){
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
// }
void reverseUsingRecursion(node* &head,node* &curr,node* &prev){
    if(curr==NULL){
        head = prev;
        return;
    }
    node* forward = curr->next;
    reverseUsingRecursion(head,forward,curr);
    curr->next = prev;
}
int main(){
    int size;
    cin>>size;
    int n1;
    cin>>n1;
    node* node1 = new node(n1);
    node* head = node1;
    node* tail = node1;
    node* curr = head;
    node* prev = NULL;
    for(int i=1;i<size;i++){
        int x;
        cin>>x;
        append(tail,x);
    }
    // reverse(head);
    reverseUsingRecursion(head,curr,prev);
    print(tail);
    return 0;
}