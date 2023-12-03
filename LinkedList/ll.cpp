#include<iostream>
using namespace std;
class node{
    public:
    int d;
    node* next;
    node(int d){
        this -> d=d;
        this ->next=NULL;
    }
};
void insertAtTail(node* &tail,int d){
    node* t=new node(d);
    tail->next=t;
    tail = t;
}
void print(node* &head){
    node* t = head;
    while(t!=NULL){
        cout<<t->d<<" ";
        t = t -> next;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int n1;
    cin>>n1;
    node* node1 = new node(n1);
    node* head = node1;
    node* tail = node1;

    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        insertAtTail(tail,x);
    }
    print(head);
}