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
    bool checkPathSum(TreeNode* root, int targetSum,int temp) {
        if(root == NULL)
            return false;

        temp = temp + root->val;

        if(root->left == NULL && root->right == NULL) {
            if(temp == targetSum)
                return true;
           // temp /= 10;
        }
        return checkPathSum(root->left,targetSum,temp) || checkPathSum(root->right,targetSum,temp);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
            return false;
        return checkPathSum(root,targetSum,0);
    }
};
