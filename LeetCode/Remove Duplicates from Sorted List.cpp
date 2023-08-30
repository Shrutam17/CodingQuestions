class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *result = head;
        while(result && result->next)
        {
            if (result->val == result->next->val)
            {
                result->next = result->next->next;
            }
            else result = result->next;
        }

        return head;
        
    }
};
