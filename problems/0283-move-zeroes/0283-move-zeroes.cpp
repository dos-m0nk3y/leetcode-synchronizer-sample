class Solution
{
  public:
    void moveZeroes(vector<int> &nums)
    {
        int left = 0;
        while (left < nums.size() - 1 && nums[left] != 0)
            left += 1;

        int right = left + 1;
        while (right < nums.size())
        {
            while (right < nums.size() - 1 && nums[right] == 0)
                right += 1;

            swap(nums[left++], nums[right++]);
        }
    }
};