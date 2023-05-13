class Solution
{
  public:
    int majorityElement(vector<int> &nums)
    {
        int candidate, count = 0;
        for (int num : nums)
        {
            if (count == 0)
            {
                candidate = num;
                count += 1;
            }
            else if (candidate == num)
                count += 1;
            else
                count -= 1;
        }

        return candidate;
    }
};