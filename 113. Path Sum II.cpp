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
    void helper(TreeNode* root, int x,vector<int> &tmp,vector<vector<int>> &res){
        if(root==NULL){return;}
        tmp.push_back(root->val);
        if(root->left==NULL && root->right==NULL && x==root->val){
            res.push_back(tmp);
        }
        helper(root->left,x-root->val,tmp,res);
        helper(root->right,x-root->val,tmp,res);
        tmp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        vector<int> tmp;
        helper(root,targetSum,tmp,res);
        return res;    
    }
};
