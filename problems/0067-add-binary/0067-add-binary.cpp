class Solution
{
  public:
    string addBinary(string a, string b)
    {
        string ret;
        int carry = 0;

        for (int i = a.length() - 1, j = b.length() - 1; i >= 0 || j >= 0; i--, j--)
        {
            if (i >= 0)
                carry += a[i];
            if (j >= 0)
                carry += b[j];

            ret += (carry & 1) + '0';
            carry = (carry & 2) >> 1;
        }

        if (carry)
            ret += '1';

        reverse(ret.begin(), ret.end());
        return ret;
    }
};