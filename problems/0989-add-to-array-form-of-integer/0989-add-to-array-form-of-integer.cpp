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
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        int carry = 0;
        int idx = num.size();

        vector<int> ret;
        do
        {
            int sum = (idx-- > 0 ? num[idx] : 0) + (k % 10) + carry;
            ret.push_back(sum % 10);
            carry = sum / 10;
        } while ((k /= 10) || carry || idx > 0);

        reverse(ret.begin(), ret.end());
        return ret;
    }
};