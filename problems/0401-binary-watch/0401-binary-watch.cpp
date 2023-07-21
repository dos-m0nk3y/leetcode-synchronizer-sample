class Solution
{
  public:
    vector<string> readBinaryWatch(int turnedOn)
    {
        vector<string> ret;
        for (int hour = 0; hour < 12; hour++)
            for (int minute = 0; minute < 60; minute++)
            {
                if (bitset<4>(hour).count() + bitset<6>(minute).count() != turnedOn)
                    continue;

                char str[6];
                sprintf(str, "%d:%02d", hour, minute);
                ret.push_back(str);
            }

        return ret;
    }
};