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
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int left = 0, right = letters.size() - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (letters[mid] <= target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return left == letters.size() ? letters[0] : letters[left];
    }
};