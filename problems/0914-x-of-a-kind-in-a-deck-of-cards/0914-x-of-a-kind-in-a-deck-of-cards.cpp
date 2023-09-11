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
    int calculate_gcd(int num1, int num2)
    {
        if (num2 == 0)
            return num1;

        return calculate_gcd(num2, num1 % num2);
    }

    bool hasGroupsSizeX(vector<int> &deck)
    {
        unordered_map<int, int> hashmap;
        for (int &card : deck)
            hashmap[card] += 1;

        int gcd = 0;
        for (auto &[key, val] : hashmap)
            gcd = calculate_gcd(val, gcd);

        return gcd > 1;
    }
};