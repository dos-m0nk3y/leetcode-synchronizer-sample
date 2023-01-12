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
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ret;
        Stack roots;

        while (!(root == NULL && roots.empty()))
        {
            while (root != NULL)
            {
                roots.push(root);
                root = root->left;
            }

            root = roots.top();
            roots.pop();
            ret.push_back(root->val);
            root = root->right;
        }

        return ret;
    }
};