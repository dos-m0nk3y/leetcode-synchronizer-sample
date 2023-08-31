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
    void helper(TreeNode *root, vector<int> &nums)
    {
        if (root == NULL)
            return;

        helper(root->left, nums);
        nums.push_back(root->val);
        helper(root->right, nums);
    }

    int minDiffInBST(TreeNode *root)
    {
        vector<int> nums;
        helper(root, nums);

        int ret = INT_MAX;
        for (int i = 1; i < nums.size(); i++)
            ret = min(ret, nums[i] - nums[i - 1]);

        return ret;
    }
};