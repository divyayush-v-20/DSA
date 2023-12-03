#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* tree(node* root){
    int data;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"Enter left node of "<<root->data<<endl;
    root->left = tree(root->left);
    cout<<"Enter right node of "<<root->data<<endl;
    root->right = tree(root->right);

    return root;
}
void inorderT(node* root){
    stack<node*> s;
    node* n = root;
    while(true){
        if(n!=NULL){
            s.push(n);
            n = n->left;
        }
        else{
            if(s.empty()==true) break;
            n = s.top();
            s.pop();
            cout<<n->data<<" ";
            n = n->right;
        }
    }
}
int main(){
    node* root = NULL;
    root = tree(root);
    // 1 2 4 -1 -1 5 6 -1 -1 7 -1 -1 3 -1 -1
    inorderT(root);
}