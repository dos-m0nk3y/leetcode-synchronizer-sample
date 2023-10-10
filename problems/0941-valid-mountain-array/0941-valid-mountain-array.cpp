static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution
{
  public:
    bool validMountainArray(vector<int> &arr)
    {
        int idx = 1;
        int size = arr.size();

        while (idx < size && arr[idx] > arr[idx - 1])
            idx += 1;

        if (idx == 1 || idx == size)
            return false;

        while (idx < size && arr[idx - 1] > arr[idx])
            idx += 1;

        return idx == size;
    }
};