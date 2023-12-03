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
int len(node* &head){
    node* temp = head;
    int ans = 0;
    while(temp){
        ans++;
        temp = temp->next;
    }
    return ans;
}
void deleteNthFromEnd(node* &head,int n){
    int l = len(head);
    int i = l-n-1;
    node* temp = head;
    while(i--){
        temp = temp->next;
    }
    node* t = temp->next;
    temp->next = t->next;
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
    int n;
    cin>>n;
    deleteNthFromEnd(head,n);
    printLL(head);
}