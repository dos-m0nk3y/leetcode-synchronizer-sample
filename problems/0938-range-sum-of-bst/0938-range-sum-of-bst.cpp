static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

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
    void inorder(TreeNode *root, int low, int high, int &res)
    {
        if (root == NULL)
            return;

        if (low <= root->val)
            inorder(root->left, low, high, res);
        if (low <= root->val && root->val <= high)
            res += root->val;
        if (root->val <= high)
            inorder(root->right, low, high, res);
    }

    int rangeSumBST(TreeNode *root, int low, int high)
    {
        int ret = 0;
        inorder(root, low, high, ret);
        return ret;
    }
};