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
    double largestTriangleArea(vector<vector<int>> &points)
    {
        double ret = 0;
        for (int i = 0; i < points.size(); i++)
            for (int j = i + 1; j < points.size(); j++)
                for (int k = j + 1; k < points.size(); k++)
                {
                    double area = points[i][0] * points[j][1] + points[j][0] * points[k][1] + points[k][0] * points[i][1];
                    area -= points[j][0] * points[i][1] + points[k][0] * points[j][1] + points[i][0] * points[k][1];
                    area /= 2;

                    ret = max(ret, abs(area));
                }

        return ret;
    }
};