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
    bool isSymmetricTree(TreeNode *left, TreeNode *right)
    {
        if (left == NULL || right == NULL)
            return left == right;

        return left->val == right->val && isSymmetricTree(left->left, right->right) && isSymmetricTree(left->right, right->left);
    }

    bool isSymmetric(TreeNode *root) { return isSymmetricTree(root->left, root->right); }
};