#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
// int main(){
//     int n;
//     cin>>n;
//     int n1;
//     cin>>n1;
//     Node* node1 = new Node(n1);
//     Node* head = node1;
//     for(int i=1;i<n;i++){
//         int x;
//         cin>>x;
//         insertAtHead(head,x);
//     }
//     print(head);
// }
int main(){
    int n;
    cin>>n;
    int n1;
    cin>>n1;
    Node* node1 = new Node(n1);
    Node* head = node1;
    Node* tail = node1;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        insertAtTail(tail,x);
    }
    print(head);
}