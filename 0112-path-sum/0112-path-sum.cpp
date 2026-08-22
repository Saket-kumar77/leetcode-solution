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
    bool solve(TreeNode* root,int sum,int target){
        if(root==NULL)
            return 0;
        sum+=root->val;
        if(root->left==NULL && root->right==NULL)
            return sum==target;
        if(solve(root->left,sum,target))
            return 1;
        if(solve(root->right,sum,target))
            return 1;
        return 0;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root,0,targetSum);
    }
};