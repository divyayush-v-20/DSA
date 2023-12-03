#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* create(Node* root){
    int d;
    cin>>d;
    root = new Node(d);
    if(d==-1) return NULL;

    root->left = create(root->left);
    root->right = create(root->right);
}
void leftView(Node* root,vector<int> &ans){
    if(root==NULL || (root->left==NULL && root->right==NULL) ) return;
    if(root->left){
        ans.push_back(root->data);
        leftView(root->left,ans);
    }    
    else{
        ans.push_back(root->data);
        leftView(root->right,ans);
    }
}
void leafNodes(Node* root,vector<int> &ans){
    if(root==NULL) return;

    leafNodes(root->left,ans);

    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
    }

    leafNodes(root->right,ans);
}
void rightRevView(Node* root,vector<int> &ans){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->right){
        rightRevView(root->right,ans);
        ans.push_back(root->data);
    }
    else{
        rightRevView(root->left,ans);
        ans.push_back(root->data);
    }
}
vector<int> boundary(Node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    leftView(root,ans);
    leafNodes(root,ans);
    rightRevView(root,ans);
    ans.pop_back();
    return ans;
}
int main(){
    Node* root = NULL;
    root = create(root);
    vector<int> b = boundary(root);
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    return 0;
}