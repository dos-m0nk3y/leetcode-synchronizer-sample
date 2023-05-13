/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
  public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);

        ListNode *curA = headA;
        ListNode *curB = headB;

        while (curA != curB)
        {
            curA = curA == NULL ? headB : curA->next;
            curB = curB == NULL ? headA : curB->next;
        }

        return curA;
    }
};