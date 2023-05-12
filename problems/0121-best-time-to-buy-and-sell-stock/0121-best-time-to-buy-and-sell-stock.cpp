class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        int profit = 0;
        int buy = 10001;

        for (int price : prices)
        {
            if (buy > price)
                buy = price;
            else
                profit = max(profit, price - buy);
        }

        return profit;
    }
};