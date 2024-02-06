/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL) return "";
        string s = "";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            if(cur==NULL) s+="#,";
            else s+=(to_string(cur->val)+",");
            if(cur!=NULL){
                q.push(cur->left);
                q.push(cur->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0) return NULL;
        queue<TreeNode*> q;
        stringstream s(data);
        string str;
        getline(s,str,',');
        TreeNode* root = new TreeNode(stoi(str));
        q.push(root);
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            getline(s,str,',');
            if(str=="#") node->left = NULL;
            else{
                TreeNode* leftN = new TreeNode(stoi(str));
                node->left = leftN;
                q.push(leftN);
            }
            getline(s,str,',');
            if(str=="#") node->right = NULL;
            else{
                TreeNode* rightN = new TreeNode(stoi(str));
                node->right = rightN;
                q.push(rightN); 
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
