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
};
void insert(node* &head,int d,int position){

    node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    node* nodeToInsert = new node(d);

    nodeToInsert->next=temp->next;
    temp->next = nodeToInsert;
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int size;
    cin>>size;
    int n;
    cin>>n;
    node* node1 = new node(n);
    node* head = node1;
    int i=2;
    while(i<=size){
        cin>>n;
        insert(head,n,i);
        i++;
    }
    print(head);
}