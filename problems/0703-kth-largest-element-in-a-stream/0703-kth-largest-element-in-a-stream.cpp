static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class KthLargest
{
  private:
    int capacity;
    priority_queue<int, vector<int>, greater<int>> pq;

  public:
    KthLargest(int k, vector<int> &nums)
    {
        capacity = k;
        for (int num : nums)
            add(num);
    }

    int add(int val)
    {
        if (pq.size() < capacity || pq.top() < val)
            pq.push(val);
        if (pq.size() > capacity)
            pq.pop();

        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */