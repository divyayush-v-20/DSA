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
node* create(node* root){
    int d;
    cin>>d;
    root = new node(d);

    if(d==-1){
        return NULL;
    }

    // cout<<"enter left child of "<<root->data<<":"<<endl;
    root->left = create(root->left);
    // cout<<"enter right child of "<<root->data<<":"<<endl;
    root->right = create(root->right);
}
vector<int> solve(node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<node*> q;
    q.push(root);

    bool l2r = true;

    while(!q.empty()){


        int s = q.size();
        vector<int> tmp(s);

        //level process
        for(int i=0;i<s;i++){

            node* front = q.front();
            q.pop();

            int ind;
            if(l2r){
                ind = i;
            }
            else{
                ind = s-i-1 ;
            }
            tmp[ind] = front->data;

            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
        l2r = !l2r;  //change in direction(left->right to right->left)
        for(auto i:tmp){
            ans.push_back(i);
        }
    }
    return ans;
}
int main(){
    node* root = NULL;
    root = create(root);
    vector<int> zigzag = solve(root);
    for(int i=0;i<zigzag.size();i++){
        cout<<zigzag[i]<<" ";
    }
    /*
    i/p: 1 2 4 -1 -1 8 -1 -1 3 6 -1 -1 9 -1 -1
    o/p: 1 3 2 4 8 6 9
    */
}