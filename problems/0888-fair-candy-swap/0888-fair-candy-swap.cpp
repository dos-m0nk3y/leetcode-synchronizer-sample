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
    vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes)
    {
        int offset = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        offset -= accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        offset /= 2;

        bitset<100001> hashset;
        for (int &candies : aliceSizes)
            if (1 <= candies + offset && candies + offset <= 100000)
                hashset.set(candies + offset);

        vector<int> ret;
        for (int &candies : bobSizes)
            if (hashset.test(candies))
            {
                ret.push_back(candies - offset);
                ret.push_back(candies);
                break;
            }

        return ret;
    }
};