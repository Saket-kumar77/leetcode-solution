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
    TreeNode* helper(TreeNode* root, int val, int d, int c) {
        if (root == nullptr) return nullptr;

        if (d - 1 == c) {
            TreeNode* left = root->left;
            TreeNode* right = root->right;

            TreeNode* addL = new TreeNode(val);
            TreeNode* addR = new TreeNode(val);

            root->left = addL;
            root->right = addR;

            addL->left = left;
            addR->right = right;

            return root;
        }

        root->left = helper(root->left, val, d, c + 1);
        root->right = helper(root->right, val, d, c + 1);

        return root;
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }

        return helper(root, val, depth, 1);
    }
};