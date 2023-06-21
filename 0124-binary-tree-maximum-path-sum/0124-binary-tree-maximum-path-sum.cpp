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
    int maxpath(TreeNode* root, int &mx){
        if(root==NULL){
            return 0;
        }
        int leftmx= maxpath(root->left,mx);
        int rightmx = maxpath(root->right,mx);
        int lft,rgt;
        if(leftmx<0)
            lft=0;
        else
            lft=leftmx;
        
        if(rightmx<0)
            rgt=0;
        else
            rgt=rightmx;
        mx = max(mx,lft+rgt+root->val);
        return root->val+ max(lft,rgt);
    }
    int maxPathSum(TreeNode* root) {
        int mx=INT_MIN;
        int a =maxpath(root,mx);
        return mx;
    }
};