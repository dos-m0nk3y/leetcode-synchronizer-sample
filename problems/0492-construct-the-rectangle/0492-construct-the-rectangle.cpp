class Solution
{
  public:
    vector<int> constructRectangle(int area)
    {
        int width = sqrt(area);
        while (area % width)
            width -= 1;

        return vector<int>{area / width, width};
    }
};