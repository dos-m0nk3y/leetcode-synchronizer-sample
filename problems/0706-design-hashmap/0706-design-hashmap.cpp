static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Node
{
  public:
    int key;
    int val;
    int height;
    Node *left;
    Node *right;

    Node() : key(0), val(0), left(NULL), right(NULL) { height = 1; }
    Node(int key, int val) : key(key), val(val), left(NULL), right(NULL) { height = 1; }
    Node(int key, int val, Node *left, Node *right) : key(key), val(val), left(left), right(right) { height = 1; }
};

class AVLTree
{
  private:
    Node *root;

    int getHeight(Node *node) { return node == NULL ? 0 : node->height; }

    Node *leftRotate(Node *root)
    {
        Node *rnode = root->right;
        root->right = rnode->left;
        rnode->left = root;

        root->height = max(getHeight(root->right), getHeight(root->right)) + 1;
        rnode->height = max(getHeight(rnode->left), getHeight(rnode->left)) + 1;

        return rnode;
    }

    Node *rightRotate(Node *root)
    {
        Node *lnode = root->left;
        root->left = lnode->right;
        lnode->right = root;

        root->height = max(getHeight(root->left), getHeight(root->right)) + 1;
        lnode->height = max(getHeight(lnode->left), getHeight(lnode->right)) + 1;

        return lnode;
    }

    Node *insert(Node *node, int key, int val)
    {
        if (node == NULL)
            return new Node(key, val);

        if (key < node->key)
            node->left = insert(node->left, key, val);
        else if (key > node->key)
            node->right = insert(node->right, key, val);
        else
            node->val = val;

        int lheight = getHeight(node->left);
        int rheight = getHeight(node->right);
        node->height = max(lheight, rheight) + 1;

        if (lheight - rheight > 1 && key < node->left->key)
            return rightRotate(node);
        if (rheight - lheight > 1 && key > node->right->key)
            return leftRotate(node);
        if (lheight - rheight > 1 && key > node->left->key)
        {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
        if (rheight - lheight > 1 && key < node->right->key)
        {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;
    }

    Node *erase(Node *node, int key)
    {
        if (node == NULL)
            return node;

        if (key < node->key)
            node->left = erase(node->left, key);
        else if (key > node->key)
            node->right = erase(node->right, key);
        else
        {
            Node *old = node;
            if (node->left == NULL)
                node = node->right;
            else if (node->right == NULL)
                node = node->left;
            else
            {
                Node *next = node->right;
                while (next->left)
                    next = next->left;

                node = new Node(next->key, next->val);
                node->left = old->left;
                node->right = erase(old->right, next->key);
            }
            delete old;
        }

        if (node == NULL)
            return node;

        int lheight = getHeight(node->left);
        int rheight = getHeight(node->right);
        node->height = max(lheight, rheight) + 1;

        if (lheight - rheight > 1 && getHeight(node->left->left) >= getHeight(node->left->right))
            return rightRotate(node);
        if (rheight - lheight > 1 && getHeight(node->right->left) <= getHeight(node->right->right))
            return leftRotate(node);
        if (lheight - rheight > 1 && getHeight(node->left->left) < getHeight(node->left->right))
        {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
        if (rheight - lheight > 1 && getHeight(node->right->left) > getHeight(node->right->right))
        {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;
    }

    Node *find(Node *node, int key)
    {
        if (node == NULL)
            return node;

        if (key < node->key)
            return find(node->left, key);
        else if (key > node->key)
            return find(node->right, key);

        return node;
    }

  public:
    AVLTree() : root(NULL) {}

    void insert(int key, int val) { root = insert(root, key, val); }

    void erase(int key) { root = erase(root, key); }

    int find(int key)
    {
        Node *node = find(root, key);
        return node ? node->val : -1;
    }
};

class MyHashMap
{
  private:
    vector<AVLTree> bucket;

  public:
    MyHashMap() { bucket.resize(13337); }

    void put(int key, int value) { bucket[key % 13337].insert(key, value); }

    int get(int key) { return bucket[key % 13337].find(key); }

    void remove(int key) { bucket[key % 13337].erase(key); }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */