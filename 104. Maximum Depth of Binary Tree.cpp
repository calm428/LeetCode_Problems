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
    void solve(int &ans, TreeNode* root,int count){
        if(root == NULL){
            ans = max(ans,count);
            return;
        }
        solve(ans,root->left,count + 1);
        solve(ans,root->right,count + 1);
    }
    int maxDepth(TreeNode* root) {
        int ans = 0;
        solve(ans,root,0);
        return ans; 
    }
};
