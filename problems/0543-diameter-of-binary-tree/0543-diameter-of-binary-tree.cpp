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
  private:
    int diameter;

  public:
    int helper(TreeNode *root)
    {
        if (root == NULL)
            return -1;

        int ldepth = helper(root->left) + 1;
        int rdepth = helper(root->right) + 1;
        diameter = max(diameter, ldepth + rdepth);

        return max(ldepth, rdepth);
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        diameter = 0;
        helper(root);

        return diameter;
    }
};