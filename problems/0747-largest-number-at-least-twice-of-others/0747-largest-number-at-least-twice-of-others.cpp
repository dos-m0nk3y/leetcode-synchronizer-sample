static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

typedef pair<int, int> Pair;

class Solution
{
  public:
    int dominantIndex(vector<int> &nums)
    {
        priority_queue<Pair, vector<Pair>, greater<Pair>> pq;
        for (int i = 0; i < nums.size(); i++)
        {
            pq.push(make_pair(nums[i], i));
            if (pq.size() == 3)
                pq.pop();
        }

        pair<int, int> second = pq.top();
        pq.pop();
        pair<int, int> first = pq.top();

        return second.first * 2 <= first.first ? first.second : -1;
    }
};