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
    int max_count;
    int prev_val;
    int count;

  public:
    void updateMode(vector<int> &modes)
    {
        if (max_count < count)
        {
            modes.clear();
            max_count = count;
        }
        if (max_count == count)
            modes.push_back(prev_val);
    }

    void helper(TreeNode *root, vector<int> &modes)
    {
        if (root == NULL)
            return;

        helper(root->left, modes);

        if (root->val == prev_val)
            count += 1;
        else
        {
            updateMode(modes);
            prev_val = root->val;
            count = 1;
        }

        helper(root->right, modes);
    }

    vector<int> findMode(TreeNode *root)
    {
        prev_val = root->val;
        max_count = count = 0;

        vector<int> ret;
        helper(root, ret);
        updateMode(ret);

        return ret;
    }
};