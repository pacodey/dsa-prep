class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode head(0);
        ListNode *tail = &head;
        int carry = 0;

        while (l1 != NULL and l2 != NULL)
        {
            int sum = l1->val + l2->val + carry;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            carry = sum / 10;

            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1 != NULL)
        {
            int sum = l1->val + carry;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            carry = sum / 10;
            l1 = l1->next;
        }
        
        while (l2 != NULL)
        {
            int sum = l2->val + carry;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            carry = sum / 10;
            l2 = l2->next;
        }

        if (carry > 0)
        {
            tail->next = new ListNode(carry);
        }
        return head.next;
    }
};