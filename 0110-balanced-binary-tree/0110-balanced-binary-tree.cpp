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
   
    
    bool isBalanced(TreeNode* root) {
        return maxDepth(root)!=-1;
        
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        int maxright = maxDepth(root->right);
        if(maxright==-1)
            return -1;
        int maxleft = maxDepth(root->left);
        if(maxleft==-1)
            return -1;
        if(abs(maxright-maxleft)>1)
            return -1;
            
        return max(maxright,maxleft)+1;
    }
};