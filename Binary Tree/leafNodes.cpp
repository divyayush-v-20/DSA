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
void solve(node* root,int &ans){
    if(root==NULL){
        return;
    }
    solve(root->left,ans);
    if(root->left==NULL && root->right==NULL){
        ans++;
    }
    solve(root->right,ans);
}
int noOfLeafNodes(node* root){
    int ans = 0;
    solve(root,ans);
    return ans;
}
int main(){
    node* root = NULL;
    root = tree(root);
    //i/p : 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //o/p : 3
    cout<<"No of leaf nodes = "<<noOfLeafNodes(root)<<endl;
}