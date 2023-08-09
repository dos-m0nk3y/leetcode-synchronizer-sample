class Solution
{
  public:
    int distributeCandies(vector<int> &candyType)
    {
        bitset<200001> bits;
        for (int type : candyType)
            bits.set(type + 100000);

        return min(bits.count(), candyType.size() / 2);
    }
};