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
    void traverseTree(TreeNode *root, string path, vector<string> &ret)
    {
        if (root == NULL)
            return;

        path = path + to_string(root->val);
        if (root->left == NULL && root->right == NULL)
            ret.push_back(path);
        else
        {
            traverseTree(root->left, path + "->", ret);
            traverseTree(root->right, path + "->", ret);
        }
    }

    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> ret;
        traverseTree(root, "", ret);
        return ret;
    }
};