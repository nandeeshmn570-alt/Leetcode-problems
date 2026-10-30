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
    void check(TreeNode* root, int target, int sum, vector<int> &curr,
               vector<vector<int>>& ans) {
        if (root == NULL) {
            return;
        }
        curr.push_back(root->val);
        sum += root->val;

        if (sum == target && root->left == NULL && root->right == NULL) {
            ans.push_back(curr);
        }

        check(root->left, target, sum, curr, ans);
        check(root->right, target, sum, curr, ans);
        curr.pop_back(); 
        
    }

    vector<vector<int>> pathSum(TreeNode* root, int target) {
        int sum = 0;
        vector<vector<int>> ans;
        vector<int> curr;
        check(root, target, 0, curr, ans);
        return ans;
    }
};