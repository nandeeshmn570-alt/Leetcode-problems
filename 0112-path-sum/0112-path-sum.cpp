/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* root, int target, int sum) {
        if (root == NULL) {
            return false;
        }

        sum += root->val;
        if (sum == target && root->left==NULL && root->right ==NULL) {
            return true;
        }
        bool leftAns = check(root->left, target, sum);
        bool rightAns = check(root->right, target, sum);

        return leftAns || rightAns;
    }

    bool hasPathSum(TreeNode* root, int target) {
        int sum = 0;
        return check(root, target, sum);
    }
};