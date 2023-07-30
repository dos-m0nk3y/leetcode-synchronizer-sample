class Solution
{
  public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> nge;

        stack<int> nums;
        for (int num : nums2)
        {
            while (!nums.empty() && nums.top() < num)
            {
                nge[nums.top()] = num;
                nums.pop();
            }
            nums.push(num);
        }
        while (!nums.empty())
        {
            nge[nums.top()] = -1;
            nums.pop();
        }

        vector<int> ret;
        ret.reserve(nums1.size());
        for (int num : nums1)
            ret.push_back(nge[num]);

        return ret;
    }
};