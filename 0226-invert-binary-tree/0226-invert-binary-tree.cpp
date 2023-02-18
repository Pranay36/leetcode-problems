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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return root;
        }
        // if((root->right->right==NULL && root->right->left==NULL || root->right==NULL) && (root->left->right==NULL && root->left->left==NULL || root->left==NULL) ){
        //     TreeNode* t = root->right;
        //     root->right = root->left;
        //     root->left = t;
        //     return root;
        // }
        TreeNode *temp = root->right;
        root->right = invertTree(root->left);
        root->left = invertTree(temp);
        
        return root;
        
    }
};