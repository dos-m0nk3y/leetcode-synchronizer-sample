class Solution
{
  public:
    bool isValid(string s)
    {
        stack<char> bracket;
        map<char, char> match = {
            {')', '('},
            {'}', '{'},
            {']', '['},
        };

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                bracket.push(s[i]);
            else
            {
                if (bracket.empty() || bracket.top() != match[s[i]])
                    return false;
                bracket.pop();
            }
        }

        return bracket.empty();
    }
};