class Solution
{
  public:
    string addStrings(string num1, string num2)
    {
        string ret;
        int idx1 = num1.size() - 1;
        int idx2 = num2.size() - 1;

        char carry = 0;
        while (idx1 >= 0 || idx2 >= 0)
        {
            carry += idx1 >= 0 ? num1[idx1--] - '0' : 0;
            carry += idx2 >= 0 ? num2[idx2--] - '0' : 0;

            ret += '0' + carry % 10;
            carry /= 10;
        }
        if (carry)
            ret += '1';

        reverse(ret.begin(), ret.end());
        return ret;
    }
};