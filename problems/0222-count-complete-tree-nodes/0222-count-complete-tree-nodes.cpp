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
    int countNodes(TreeNode *root)
    {
        int depth = 0;
        if (root == NULL)
            return depth;

        TreeNode *node = root;
        while ((node = node->left) != NULL)
            depth += 1;

        int left = 1 << depth;
        int right = (left << 1) - 1;

        while (left <= right)
        {
            node = root;
            int mid = (left + right) / 2;

            bitset<16> movement(mid);
            for (int i = 0; i < depth; i++)
                node = movement[depth - 1 - i] ? node->right : node->left;

            if (node == NULL)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return left - 1;
    }
};