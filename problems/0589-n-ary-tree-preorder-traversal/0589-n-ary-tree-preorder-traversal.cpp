/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
  public:
    vector<int> preorder(Node *root)
    {
        vector<int> ret;
        if (root == NULL)
            return ret;

        stack<Node *> nodes;
        nodes.push(root);

        while (!nodes.empty())
        {
            root = nodes.top();
            nodes.pop();

            ret.push_back(root->val);
            for (auto rit = root->children.rbegin(); rit != root->children.rend(); rit++)
                nodes.push(*rit);
        }

        return ret;
    }
};