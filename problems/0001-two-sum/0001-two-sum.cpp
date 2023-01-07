typedef unordered_map<int, int> Map;

class Solution
{
  public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        Map nums_map;
        vector<int> ret;

        for (int i = 0; i < nums.size(); i++)
        {
            Map::iterator it = nums_map.find(target - nums[i]);
            if (it != nums_map.end())
            {
                ret = {it->second, i};
                break;
            }
            nums_map[nums[i]] = i;
        }

        return ret;
    }
};