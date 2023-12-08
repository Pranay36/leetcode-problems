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
    string ans ="";
    
    void f(TreeNode* root){
        if(root==NULL){
            
            return;
        }
        int x = root->val;
        string t = to_string(x);
        ans += t;
        if(root->left!=NULL || root->right!=NULL){
        ans += '(';
        f(root->left);
        ans+=')'; 
        }
        if(root->right!=NULL){
        ans += '(';
        f(root->right);
        ans+=')';
        }
        return;
        
    }
    
    string tree2str(TreeNode* root) {
        f(root);
        return ans;
    }
};