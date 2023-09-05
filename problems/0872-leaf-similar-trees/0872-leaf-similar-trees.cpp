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
    void helper(TreeNode *root, vector<int> &leaves)
    {
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL)
            leaves.push_back(root->val);
        else
        {
            helper(root->left, leaves);
            helper(root->right, leaves);
        }
    }

    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> leaves1, leaves2;
        helper(root1, leaves1);
        helper(root2, leaves2);

        return leaves1 == leaves2;
    }
};