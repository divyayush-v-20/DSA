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
node* buildTree(node* root){
    int d;
    cin>>d;
    root = new node(d);

    if(d==-1){
        return NULL;
    }
    cout<<"enter left for "<<root->data<<endl;
    root->left = buildTree(root->left);
    cout<<"enter right for "<<root->data<<endl;
    root->right = buildTree(root->right);
}
int findHeight(node* root){
    if(root==NULL){
        return 0;
    }
    else{
        int left = findHeight(root->left);
        int right = findHeight(root->right);
        int height = max(left,right)+1;
        return height;
    }
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
    root = buildTree(root);
    int h = findHeight(root);
    int l = noOfLeafNodes(root);
    cout<<"height of tree = "<<h<<endl;
    cout<<"no of leaf nodes in tree = "<<l<<endl;
}