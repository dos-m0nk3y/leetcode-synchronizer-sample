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
    string toGoatLatin(string sentence)
    {
        sentence += ' ';

        string word, ret;
        int count = 0;

        for (char &ch : sentence)
        {
            if (ch != ' ')
                word += ch;
            else
            {
                char first = tolower(word.front());
                if (!(first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u'))
                    word = (word + word[0]).substr(1, -1);
                ret += word + "ma";
                word = "";

                count += 1;
                for (int i = 0; i < count; i++)
                    ret += "a";
                ret += ' ';
            }
        }

        return ret.substr(0, ret.length() - 1);
    }
};