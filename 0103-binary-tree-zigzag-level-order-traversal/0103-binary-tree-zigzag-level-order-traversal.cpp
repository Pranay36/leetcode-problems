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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        else{
            int lh = height(root->left);
            int rh = height(root->right);
            
            if(lh>rh){
                return lh+1;
            }
            else
                return rh+1;
        }
    }
    
    void add(TreeNode* root, int h, vector<int> &v){
        if(root==NULL){
            return;
        }
        if(h==1){
            v.push_back(root->val);
        }
        else if(h>1){
            add(root->right,h-1,v);
            add(root->left,h-1,v);
        }
    }
    
    void solve(vector<vector<int>> &ans, TreeNode* root){
        int h = height(root);
        
        for(int i=1;i<=h;i++){
            vector<int> v;
            add(root,i,v);
            ans.push_back(v);
        }
        
    }
  
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>>ans;
    int x=0;
    solve (ans, root);
    for(int i=0;i<ans.size();i=i+2){
        reverse(ans[i].begin(),ans[i].end());
    }
    return ans;
}
};