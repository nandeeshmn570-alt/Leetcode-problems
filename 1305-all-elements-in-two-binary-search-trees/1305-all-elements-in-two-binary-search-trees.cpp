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
    void traversal(vector<int>& ans, TreeNode* root) {
        if (root == NULL) {
            return;
        }
        traversal(ans, root->left);
        ans.push_back(root->val);
        traversal(ans, root->right);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1;
        vector<int> ans2;
        traversal(ans1, root1);
        traversal(ans2, root2);

        vector<int> temp;
        int i = 0, j = 0;
        while (i < ans1.size() && j<ans2.size()) {
            if (ans1[i] <= ans2[j]) {
                temp.push_back(ans1[i]);
                i++;
            } else {
                temp.push_back(ans2[j]);
                j++;
            }
        }
        while (i < ans1.size()) {
            temp.push_back(ans1[i]);
            i++;
        }

        while (j < ans2.size()) {
            temp.push_back(ans2[j]);
            j++;
        }
        return temp;
    }
};