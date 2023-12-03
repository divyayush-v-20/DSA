#include<iostream>
using namespace std;
class Node{
        public:
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};
void insert(Node* &head,int d,int position){

    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert->next=temp->next;
    temp->next = nodeToInsert;
}
void print(Node* &head){
		Node* temp = head;
		while(temp!=NULL){
			cout<<temp ->data<<" ";
			temp=temp->next;
		}
        cout<<endl;
	}	
Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forw =NULL;
    while(curr!=NULL){
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    return prev;
}

int main(){
    int size;
    cin>>size;
    int n1;
    cin>>n1;
    Node* node1 = new Node(n1);
    Node* head = node1;
    Node* tail = node1;

    for(int i=2;i<=size;i++){
        int x;
        cin>>x;
        insert(tail,x,i);
    }
    print(head);
    reverse(head);
    print(tail);
}
