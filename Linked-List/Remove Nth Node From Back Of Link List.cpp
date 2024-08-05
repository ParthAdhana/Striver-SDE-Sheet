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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int sz=0;
        n++;
        while(n--)
        {
            if(temp==NULL)return head->next;
            temp=temp->next;
            sz++;
        }
        
        ListNode* Lag=head;
        while(temp!=NULL)
        {
            sz++;
            temp=temp->next;
            Lag=Lag->next;
        }
        Lag->next=Lag->next->next;
        return head;
    }
};