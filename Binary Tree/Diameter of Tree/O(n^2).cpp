#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* createTree(node* root){
    int d;
    cin>>d;
    root = new node(d);

    if(d == -1){
        return NULL;
    }

    cout<<"enter left node of "<<root -> data<<endl;
    root -> left = createTree (root -> left);
    cout<<"enter right node of "<<root -> data<<endl;
    root -> right = createTree (root -> right);

    return root;
}
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    int ans = max(l,r)+1;
    return ans;
}
int diameter(node* root){
    if(root==NULL){
        return 0;
    }
    int d1 = diameter(root->left);
    int d2 = diameter(root->right);
    int d3 = height(root->left)+height(root->right)+1;
    int ans = max(d1,max(d2,d3));
    return ans;
}
int main(){
    node* root = NULL;
    root = createTree(root);
    int d = diameter(root);
    cout<<"diameter of tree = "<<d<<endl;
    //I/P: 1 3 7 9 -1 -1 -1 11 -1 -1 2 4 -1 -1 8 -1 6 -1 -1
    //O/P: 7
}