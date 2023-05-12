typedef stack<TreeNode *> Stack;

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
    vector<int> postorderTraversal(TreeNode *root)
    {
        Stack roots;
        roots.push(root);

        vector<int> ret;
        while (!roots.empty())
        {
            root = roots.top();
            roots.pop();
            if (root == NULL)
                continue;

            ret.push_back(root->val);
            roots.push(root->left);
            roots.push(root->right);
        }

        reverse(ret.begin(), ret.end());
        return ret;
    }
};