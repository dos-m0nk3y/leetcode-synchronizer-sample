class Solution
{
  public:
    int calPoints(vector<string> &operations)
    {
        vector<int> score;
        for (string operation : operations)
        {
            if (operation == "+")
                score.push_back(score.back() + score[score.size() - 2]);
            else if (operation == "D")
                score.push_back(score.back() * 2);
            else if (operation == "C")
                score.pop_back();
            else
                score.push_back(stoi(operation));
        }

        return accumulate(score.begin(), score.end(), 0);
    }
};