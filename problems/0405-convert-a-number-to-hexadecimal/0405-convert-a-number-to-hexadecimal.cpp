class Solution
{
  public:
    string toHex(int num)
    {
        char hashmap[17] = "0123456789abcdef";
        unsigned int unum = num;

        string ret;
        do
        {
            ret = hashmap[unum & 0xF] + ret;
        } while ((unum = unum >> 4));

        return ret;
    }
};