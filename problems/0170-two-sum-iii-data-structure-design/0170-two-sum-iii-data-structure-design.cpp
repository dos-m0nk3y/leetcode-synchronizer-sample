class TwoSum
{
  private:
    unordered_map<int, int> nums;
    int min_num;
    int max_num;

  public:
    TwoSum() : min_num(100001), max_num(-100001) {}

    void add(int number)
    {
        nums[number] += 1;
        min_num = min(min_num, number);
        max_num = max(max_num, number);
    }
    bool find(int value)
    {
        if ((long)value < 2 * min_num || 2 * max_num < (long)value)
            return false;

        for (auto num : nums)
        {
            long target = (long)value - num.first;
            if (target < INT_MIN || INT_MAX < target)
                continue;

            if (nums.find(target) != nums.end())
            {
                if (num.first == target && num.second == 1)
                    continue;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */