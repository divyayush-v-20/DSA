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
vector<int> bottomView(Node* root){
    vector<int> ans;
    if(root==NULL) return ans;
    queue<pair<Node*,int>> q;
    map<int,int> mp;
    q.push({root,0});
    while(!q.empty()){
        auto i = q.front();
        q.pop();
        Node* node = i.first;
        int y = i.second;

        mp[y] = node->val;

        if(node->left) q.push({node->left,y-1});
        if(node->right) q.push({node->right,y+1});
    }

    for(auto i:mp){
        ans.push_back(i.second);
    }
    return ans;
}
int main(){
    Node* root = NULL;
    root = create(root);
    //i/p: 1 2 4 -1 -1 5 6 -1 -1 -1 3 -1 7 -1 -1
    //o/p: 4 6 5 3 7
    vector<int> bottom = bottomView(root);
    for(auto i:bottom){
        cout<<i<<" ";
    }
    return 0;
}