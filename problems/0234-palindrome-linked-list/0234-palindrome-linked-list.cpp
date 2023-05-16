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
    bool isPalindrome(ListNode *head)
    {
        ListNode *tortoise = head;
        ListNode *hare = head;

        while (hare->next != NULL && hare->next->next != NULL)
        {
            tortoise = tortoise->next;
            hare = hare->next->next;
        }

        ListNode *cur = tortoise->next;
        ListNode *tail = NULL;
        while (cur != NULL)
        {
            ListNode *next = cur->next;
            cur->next = tail;
            tail = cur;
            cur = next;
        }

        while (tail != NULL)
        {
            if (head->val != tail->val)
                return false;

            head = head->next;
            tail = tail->next;
        }

        return true;
    }
};