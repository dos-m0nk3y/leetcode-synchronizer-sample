typedef pair<double, int> Pair;

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
    int closestValue(TreeNode *root, double target)
    {
        priority_queue<Pair, vector<Pair>, greater<Pair>> pq;
        while (root != NULL)
        {
            if (target == root->val)
                return target;

            pq.push(make_pair(abs(root->val - target), root->val));
            root = target < root->val ? root->left : root->right;
        }

        return pq.top().second;
    }
};