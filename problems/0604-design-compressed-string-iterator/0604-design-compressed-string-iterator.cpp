class StringIterator
{
  private:
    vector<char> ch;
    vector<int> count;

  public:
    StringIterator(string compressedString)
    {
        string num;
        for (int i = compressedString.length() - 1; i >= 0; i--)
        {
            if (isdigit(compressedString[i]))
                num += compressedString[i];
            else
            {
                ch.push_back(compressedString[i]);
                count.push_back(stoi(string(num.rbegin(), num.rend())));
                num = "";
            }
        }
    }

    char next()
    {
        if (!hasNext())
            return ' ';

        char ret = ch.back();
        count.back() -= 1;

        if (count.back() == 0)
        {
            ch.pop_back();
            count.pop_back();
        }

        return ret;
    }

    bool hasNext() { return ch.size(); }
};

/**
 * Your StringIterator object will be instantiated and called as such:
 * StringIterator* obj = new StringIterator(compressedString);
 * char param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */