/*
1)Inorder Traversal - L N R

2)Pre Order Traversal - N L R

3)Post Order Traversal - L R N

*/
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
    root->left=tree(root->left);
    root->right=tree(root->right);

    return root;
}
void inorder(node* root){
    //LNR
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preOrder(node* root){
    //NLR
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node* root){
    //LRN
    if(root == NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    /*Sample I/P :
     1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
     */
    node* root = NULL;
    root = tree(root);
    inorder(root); //Output - 7 3 11 1 17 5
    cout<<endl;
    preOrder(root); //Output - 1 3 7 11 5 17
    cout<<endl;
    postOrder(root); //Output - 7 11 3 17 5 1
}