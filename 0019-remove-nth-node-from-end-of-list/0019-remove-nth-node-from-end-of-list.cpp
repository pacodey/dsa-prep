class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode dummy(0);
        dummy.next = head;
        
        ListNode *right = &dummy;
        ListNode *left = &dummy;
        int diff = 0;

        while (right -> next != NULL)
        {
            right = right -> next;
            diff++;
            if (diff > n)
            {
                left = left -> next;
            }
        }

        left -> next = left -> next -> next;
        return dummy.next;
    }
};