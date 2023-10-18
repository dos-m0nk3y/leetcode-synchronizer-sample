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
    bool helper(TreeNode *root, int val, vector<int> &path)
    {
        if (root == NULL)
            return false;

        if (root->val == val || helper(root->left, val, path) || helper(root->right, val, path))
        {
            path.push_back(root->val);
            return true;
        }

        return false;
    }

    bool isCousins(TreeNode *root, int x, int y)
    {
        vector<int> x_path, y_path;
        helper(root, x, x_path);
        helper(root, y, y_path);

        if (x_path.size() == y_path.size())
            for (int i = 1; i < x_path.size(); i++)
                if (x_path[i] != y_path[i])
                    return true;

        return false;
    }
};