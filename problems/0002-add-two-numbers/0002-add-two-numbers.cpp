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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head = new ListNode();
        ListNode *cur = head;
        int val1, val2, sum, carry = 0;

        ListNode *last_node = new ListNode();
        last_node->next = last_node;

        while (!(l1 == last_node && l2 == last_node))
        {
            sum = l1->val + l2->val + carry;
            carry = sum / 10;

            cur = cur->next = new ListNode(sum - carry * 10);

            if ((l1 = l1->next) == NULL)
                l1 = last_node;
            if ((l2 = l2->next) == NULL)
                l2 = last_node;
        }

        if (carry)
            cur->next = new ListNode(carry);

        return head->next;
    }
};