class Solution
{
  public:
    vector<string> findWords(vector<string> &words)
    {
        unordered_map<char, char> hashmap;
        string keyboard[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        for (int i = 0; i < 3; i++)
            for (char ch : keyboard[i])
                hashmap[ch] = i;

        vector<string> ret;
        for (string str : words)
        {
            bool check = true;
            for (int i = 1; i < str.length(); i++)
                if (hashmap[tolower(str[i])] != hashmap[tolower(str[0])])
                {
                    check = false;
                    break;
                }

            if (check)
                ret.push_back(str);
        }

        return ret;
    }
};