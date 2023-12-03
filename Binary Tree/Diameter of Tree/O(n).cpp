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

    root -> left = createTree (root -> left);
    root -> right = createTree (root -> right);

    return root;
}
pair<int,int> func(node* root){
    if(root == NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    
    pair<int,int> left = func(root->left);
    pair<int,int> right = func(root->right);

    int d1 = left.first;
    int d2 = right.first;
    int d3 = left.second + right.second +1;

    pair<int,int> ans;
    ans.first = max(d1,max(d2,d3));
    ans.second = max(left.second,right.second)+1;

    return ans;
}
int diameter(node* root){
    int ans = func(root).first;
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