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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head,*fast=head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            
        }
        //cout<<slow->val<<' '<<endl;
        ListNode* prev=NULL,*next;
        while(slow)
        {
            next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }
        //cout<<prev->val<<' ';
        while(prev)
        {
            if(head==NULL)return false;
            if(prev->val!=head->val)return false;
            
            prev=prev->next;
            head=head->next;
        }
        //if(head)return false;
        return true;
    }
};
