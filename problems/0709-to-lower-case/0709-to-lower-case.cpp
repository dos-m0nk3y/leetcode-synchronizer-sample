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
    string toLowerCase(string s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};