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
    bool isLongPressedName(string name, string typed)
    {
        name.push_back(' ');
        typed.push_back(' ');

        int i, j;
        for (i = 0, j = 0; i < name.length() && j < typed.length(); i++, j++)
        {
            if (name[i] != typed[j])
                return false;

            if (name[i] != name[i + 1])
                while (typed[j] == typed[j + 1])
                    j += 1;
        }

        return i == name.length() && j == typed.length();
    }
};