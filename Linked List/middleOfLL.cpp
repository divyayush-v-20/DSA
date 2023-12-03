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
int middle(node* &head){
    int n = len(head)/2;
    node* temp = head;
    while(n--){
        temp = temp->next;
    }
    return temp->data;
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
    cout<<"middle element : "<<middle(head)<<endl;
}