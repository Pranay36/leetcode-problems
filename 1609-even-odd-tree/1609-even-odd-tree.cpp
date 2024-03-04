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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int x =0;
        while(q.size()!=0){
            int n = q.size();
            if(x%2==0){
                auto node = q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                int prev = node->val;
                if(prev%2==0)return false;
                for(int i=1;i<n;i++){
                    auto p = q.front();
                    q.pop();
                    int cur = p->val;
                    if(cur<=prev|| cur%2==0){
                        return false;
                    }
                    prev =cur;
                    if(p->left)q.push(p->left);
                    if(p->right)q.push(p->right);
                }
            }else{
                auto node = q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                int prev = node->val;
                if(prev%2==1)return false;
                for(int i=1;i<n;i++){
                    auto p = q.front();
                    q.pop();
                    int cur = p->val;
                    if(cur>=prev || cur%2==1){
                        return false;
                    }
                    prev =cur;
                    if(p->left)q.push(p->left);
                    if(p->right)q.push(p->right);
                }   
            }
            x++;
        }
        return true;
    }
};