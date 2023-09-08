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
  private:
    TreeNode *head;
    TreeNode *tail;

  public:
    void helper(TreeNode *node)
    {
        if (node == NULL)
            return;

        helper(node->left);
        node->left = NULL;
        tail = tail->right = node;
        helper(node->right);
    }

    TreeNode *increasingBST(TreeNode *root)
    {
        head = tail = new TreeNode();
        helper(root);
        return head->right;
    }
};