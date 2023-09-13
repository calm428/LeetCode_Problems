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
    void solve(TreeNode*root,int &ans,int count){
        if(root==NULL){
            return ;
        }
        count=count+1;
        if(root->left==NULL && root->right==NULL){
            if(ans>=count)ans=count;
            return ;
        }
        solve(root->left,ans,count);
        solve(root->right,ans,count);
    }
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        int ans=INT_MAX;
        int count=0;
        solve(root,ans,count);
        return ans;
    }
};
