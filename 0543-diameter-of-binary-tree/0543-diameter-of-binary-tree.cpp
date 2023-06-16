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
    int diameterOfBinaryTree(TreeNode* root) {
        int dim =0;
         maxDepth(root,dim);
        return dim;
    }
    int maxDepth(TreeNode* root,int &dim) {
        if(root==NULL)
            return 0;
        int maxright = maxDepth(root->right,dim);
        
        int maxleft = maxDepth(root->left,dim);
        // int ans = maxright+maxleft
         dim = max(maxleft+maxright,dim);
        
        return max(maxright,maxleft)+1;
    }
};