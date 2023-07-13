class MovingAverage
{
  private:
    int capacity;
    double sum;
    queue<int> cache;

  public:
    MovingAverage(int size)
    {
        capacity = size;
        sum = 0;
    }

    double next(int val)
    {
        if (cache.size() == capacity)
        {
            sum -= cache.front();
            cache.pop();
        }

        sum += val;
        cache.push(val);

        return sum / cache.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */