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
    int getMinimumDifference(TreeNode *root)
    {
        int prev = INT_MAX;
        int diff = INT_MAX;

        stack<TreeNode *> nodes;
        while (!(nodes.empty() && root == NULL))
        {
            while (root != NULL)
            {
                nodes.push(root);
                root = root->left;
            }

            root = nodes.top();
            nodes.pop();

            diff = min(diff, abs(root->val - prev));
            prev = root->val;

            root = root->right;
        }

        return diff;
    }
};