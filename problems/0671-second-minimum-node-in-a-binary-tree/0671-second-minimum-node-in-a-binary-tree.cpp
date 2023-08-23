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
class Solution
{
  public:
    unsigned int helper(TreeNode *root)
    {
        if (root->left == NULL)
            return UINT_MAX;

        unsigned int left = root->val == root->left->val ? helper(root->left) : root->left->val;
        unsigned int right = root->val == root->right->val ? helper(root->right) : root->right->val;

        return min(left, right);
    }

    int findSecondMinimumValue(TreeNode *root)
    {
        unsigned int ret = helper(root);
        return ret == UINT_MAX ? -1 : ret;
    }
};