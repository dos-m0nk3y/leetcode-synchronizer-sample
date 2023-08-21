class Solution
{
  public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int len = nums.size();
        int sum = len * (len + 1) / 2;

        int xor_all = 0;
        for (int i = 0; i < len; i++)
        {
            xor_all ^= nums[i] ^ (i + 1);
            sum -= nums[i];
        }
        int lsb = xor_all & ~(xor_all - 1);

        int xor_arr[2] = {0, 0};
        for (int i = 0; i < len; i++)
        {
            xor_arr[nums[i] & lsb ? 0 : 1] ^= nums[i];
            xor_arr[(i + 1) & lsb ? 0 : 1] ^= i + 1;
        }

        if (xor_arr[1] + sum == xor_arr[0])
            swap(xor_arr[0], xor_arr[1]);

        return vector<int>{xor_arr[0], xor_arr[1]};
    }
};