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
    int uniqueMorseRepresentations(vector<string> &words)
    {
        string morse_code[26] = {".-", "-...", "-.-.", "-..",  ".",   "..-.", "--.", "....", "..",   ".---", "-.-",  ".-..", "--",
                                 "-.", "---",  ".--.", "--.-", ".-.", "...",  "-",   "..-",  "...-", ".--",  "-..-", "-.--", "--.."};

        unordered_set<string> hashmap;
        for (string &word : words)
        {
            string xform = "";
            for (char &ch : word)
                xform += morse_code[ch - 'a'];
            hashmap.insert(xform);
        }

        return hashmap.size();
    }
};