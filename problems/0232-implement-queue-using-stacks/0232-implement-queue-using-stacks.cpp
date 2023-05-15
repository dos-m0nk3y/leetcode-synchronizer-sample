class MyQueue
{
  private:
    stack<int> _cache;
    stack<int> _queue;

  public:
    MyQueue() {}

    void push(int x) { _cache.push(x); }
    int pop()
    {
        int ret = peek();
        _queue.pop();
        return ret;
    }

    int peek()
    {
        if (_queue.empty())
            while (!_cache.empty())
            {
                _queue.push(_cache.top());
                _cache.pop();
            }

        return _queue.top();
    }

    bool empty() { return _cache.empty() && _queue.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */