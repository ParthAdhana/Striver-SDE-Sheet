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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prior=NULL;
        ListNode* first=head;
        if(first==NULL || first->next==NULL)
        {
            return head;
        }
        ListNode* second=first->next;
        while(second!=NULL)
        {
            first->next=prior;
            prior=first;
            first=second;
            second=second->next;
        }
        first->next=prior;
        return first;
    }
};