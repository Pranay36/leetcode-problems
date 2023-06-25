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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        long long ans=0;
        while(q.size()!=0){
            int n = q.size();
            long long mn = q.front().second;
            long long first, last;
            for(int i=0;i<n;i++){
                TreeNode* p = q.front().first;
                long long x = q.front().second-mn;
                q.pop();
                if(i==0)
                    first=x;
                if(i==n-1)
                    last = x;
                if(p->left)
                    q.push({p->left,2*x+1});
                if(p->right)
                    q.push({p->right, 2*x+2});
                
            }
            ans= max(ans, last-first+1);
        }
        return ans;
    }
};