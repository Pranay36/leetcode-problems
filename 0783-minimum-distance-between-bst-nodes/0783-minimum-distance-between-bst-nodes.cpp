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
    set<int,int> s;
    int minDiffInBST(TreeNode* root) {
       vector<int>v;
        stack<TreeNode*> s;
        TreeNode* temp = root;
        while(temp!=NULL || !s.empty()){
            while(temp!=NULL){
                s.push(temp);
                temp = temp->left;
            }
            temp = s.top();
            s.pop();
            v.push_back(temp->val);
            temp = temp->right;
        }
        
        int mn = INT_MAX;
        for(int i=1;i<v.size();i++){
            mn = min(mn,v[i]-v[i-1]);
        }
        return mn;
    }
};