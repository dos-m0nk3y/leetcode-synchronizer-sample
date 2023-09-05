static const int fast_io = []()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
  public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *turtle = head;
        ListNode *hare = head;

        while (hare && hare->next)
        {
            turtle = turtle->next;
            hare = hare->next->next;
        }

        return turtle;
    }
};