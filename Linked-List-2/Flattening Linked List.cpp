/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head,*slow=head,*dummy=head;
        bool flag=0;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        return NULL;
        while(dummy!=slow)
        {
            dummy=dummy->next;
            slow=slow->next;
        }
        return slow;
        
    }
};