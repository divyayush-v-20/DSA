#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int d){
        this->val = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* create(Node* root){
    int data;
    cin>>data;
    root = new Node(data);

    if(data==-1) return NULL;

    root->left = create(root->left);
    root->right = create(root->right);

    return root;
}
void help(Node* root,int level,vector<int>& vec){
    if(root==NULL) return;

    if(level==vec.size()){
        vec.push_back(root->val);
    }

    help(root->right,level+1,vec);
    help(root->left,level+1,vec);
}
vector<int> rightView(Node* root){
    vector<int> vec;
    help(root,0,vec);
    return vec;
}
int main(){
    Node* root = NULL;
    root = create(root);
    //i/p: 1 2 4 -1 -1 5 6 -1 -1 -1 3 -1 7 -1 -1
    //o/p: 1 3 7 6
    vector<int> right = rightView(root);
    for(auto i:right){
        cout<<i<<" ";
    }
    return 0;
}