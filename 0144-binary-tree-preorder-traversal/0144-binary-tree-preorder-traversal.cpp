/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>v;
    vector<int> preorderTraversal(TreeNode* root) {
//         if(root){
//         v.push_back(root->val);
//         preorderTraversal(root->left);
//         preorderTraversal(root->right);            
//         }
        stack<TreeNode*> q;
        if(root==NULL)
            return v;
        q.push(root);
        while(q.size()!=0){
            TreeNode* node = q.top();
            v.push_back(node->val);

            q.pop();
            if(node->right!=NULL)
            q.push(node->right);
            if(node->left!=NULL)
            q.push(node->left);
            
        }
        return v;
    }
};