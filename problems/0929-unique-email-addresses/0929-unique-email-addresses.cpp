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
    int numUniqueEmails(vector<string> &emails)
    {
        unordered_set<string> hashset;
        for (string &email : emails)
        {
            string username;
            for (char ch : email)
            {
                if (ch == '.')
                    continue;
                else if (ch == '+' || ch == '@')
                    break;
                else
                    username += ch;
            }
            hashset.insert(username + email.substr(email.find('@')));
        }

        return hashset.size();
    }
};