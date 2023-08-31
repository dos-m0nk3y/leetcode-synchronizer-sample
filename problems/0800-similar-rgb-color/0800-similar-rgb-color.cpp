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
    string similarRGB(string color)
    {
        char ret[8] = "#";
        for (int i = 0; i < 3; i++)
        {
            int num = stoi(color.substr(1 + i * 2, 2), NULL, 16);
            num = round(num / 17.0) * 17;
            sprintf(ret + 1 + i * 2, "%02x", num);
        }

        return ret;
    }
};