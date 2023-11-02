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
    int c(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+c(root->right) + c(root->left);
        
    }
    int sum(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return root->val + sum(root->right) + sum(root->left);
    }
    
    int averageOfSubtree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int count =0;
        while(q.size()!=0){
            TreeNode* p = q.front();
            q.pop();
            int x = sum(p)/c(p);
            if(x==p->val)
                count++;
            
            if(p->left!=NULL){
                q.push(p->left);
            }
            if(p->right!=NULL){
                q.push(p->right);
            }
        }
        return count;
    }
};