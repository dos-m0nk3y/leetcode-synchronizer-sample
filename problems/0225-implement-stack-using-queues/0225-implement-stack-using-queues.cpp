class MyStack
{
  private:
    queue<int> _stack;

  public:
    MyStack() {}

    void push(int x)
    {
        _stack.push(x);
        for (int i = _stack.size(); i > 1; i--)
        {
            int front = _stack.front();
            _stack.pop();
            _stack.push(front);
        }
    }
    int pop()
    {
        int ret = _stack.front();
        _stack.pop();
        return ret;
    }

    int top() { return _stack.front(); }

    bool empty() { return _stack.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */