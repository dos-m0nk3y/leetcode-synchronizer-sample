class Solution
{
  public:
    vector<int> plusOne(vector<int> &digits)
    {
        for (int i = digits.size(); i > 0; i--)
        {
            digits[i - 1] = digits[i - 1] == 9 ? 0 : digits[i - 1] + 1;
            if (digits[i - 1] != 0)
                break;
        }

        if (digits[0] == 0)
            digits.insert(digits.begin(), 1);

        return digits;
    }
};