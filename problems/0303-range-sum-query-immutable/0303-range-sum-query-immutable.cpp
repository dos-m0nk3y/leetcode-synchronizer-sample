class NumArray
{
  private:
    int _nums[10001];

  public:
    NumArray(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        for (int i = 0; i < nums.size(); i++)
            _nums[i + 1] = nums[i] + _nums[i];
    }

    int sumRange(int left, int right) { return _nums[right + 1] - _nums[left]; }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */